/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   17:19
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer\main.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer
	file base:	main
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <iostream>
using namespace std;

#include "Subject.h"
//#include "Observer.h"

class SubjectChild : public Subject
{
public:
	SubjectChild() :
	nData1(0), nData2(0), nData3(0){ };

public:
	void SetData1(int nData){ if(nData == nData1) return; nData1 = nData; DataChanged(); };
	void SetData2(int nData){ if(nData == nData2) return; nData2 = nData; DataChanged(); };
	void SetData3(int nData){ if(nData == nData3) return; nData3 = nData; DataChanged(); };

	void NotifyObservers()
	{
		for (std::list<Observer*>::iterator it = m_pObserverList.begin();it != m_pObserverList.end();++it)
		{
			(*it)->Update(nData1, nData2, nData3);
		}
	};

	/*void DataChanged()
	{
		NotifyObservers();
	};*/

private:
	int nData1;
	int nData2;
	int nData3;
};

class ObserverChild : public Observer
{
	void Update(int nData1, int nData2, int nData3)
	{
		cout<<nData1<<"\t"<<nData2<<"\t"<<nData3<<endl;
	};
};

int main()
{
	SubjectChild* pSubjectChild = new SubjectChild();
	ObserverChild* pObserverChild = new ObserverChild();
	pSubjectChild->RegisterObserver(pObserverChild);
	pSubjectChild->SetData1(1);
	pSubjectChild->SetData2(1);
	pSubjectChild->SetData3(1);
	pSubjectChild->SetData1(1);

	system("pause");
	return 0;
}
