/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   17:19
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer\Subject.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Observer\Observer
	file base:	Subject
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "Subject.h"

Subject::Subject(void)
{
}

Subject::~Subject(void)
{
}

void Subject::RegisterObserver(Observer* pObserver)
{
	if (pObserver == NULL)
	{
		return;
	}

	m_pObserverList.push_back(pObserver);
}

void Subject::RemoveObserver(Observer* pObserver)
{
	for (std::list<Observer*>::iterator it = m_pObserverList.begin();it != m_pObserverList.end();++it)
	{
		if (*it == pObserver)
		{
			it = m_pObserverList.erase(it);
			return;
		}
	}
}

void Subject::NotifyObservers()
{
	for (std::list<Observer*>::iterator it = m_pObserverList.begin();it != m_pObserverList.end();++it)
	{
		(*it)->Update(0, 0, 0);
	}
}

void Subject::DataChanged()
{
	NotifyObservers();
}
