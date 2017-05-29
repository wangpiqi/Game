#include <iostream>
using namespace std;

#include "Aggregate.h"
#include "Component.h"

typedef std::vector<Aggregate*> AggregateVec;

class Client
{
public:
	/*Client(Aggregate* pVectorAggregate, Aggregate* pListAggregate)
	{
		m_pVectorAggregate = pVectorAggregate;
		m_pListAggregate = pListAggregate;
	};*/

	Client(AggregateVec aggregateVec)
	{
		m_AggregateVec = aggregateVec;
	}

	void Print()
	{
		/*Print(m_pVectorAggregate);
		Print(m_pListAggregate);*/

		for (AggregateVec::iterator it = m_AggregateVec.begin();it != m_AggregateVec.end();++it)
		{
			Print(*it);
		}
	};

	void Print(Aggregate* pAggregate)
	{
		Iterator* pIterator = pAggregate->CreateIterator();
		while(pIterator->HasNext())
		{
			int nValue = pIterator->Next();
			cout<<nValue<<"\t";
		}

		cout<<endl;
	};

private:
	Aggregate* m_pVectorAggregate;
	Aggregate* m_pListAggregate;

	AggregateVec m_AggregateVec;
};

class NewClient
{
public:
	NewClient(Component* pComponent){ m_pComponent = pComponent; };

	void Print()
	{
		m_pComponent->Print();
	}

	void NewPrint()
	{
		m_pComponent->NewPrint();

		Iterator* pIterator = m_pComponent->CreateIterator();
		while(pIterator->HasNext())
		{
			Component* pComponent = pIterator->Next(0);
			pComponent->NewPrint();
		}
	}

private:
	Component* m_pComponent;
};

int main()
{
	Aggregate* pVectorAggregate = new VectorAggregate();
	Aggregate* pListAggregate = new ListAggregate();

	//Client* pClient = new Client(pVectorAggregate, pListAggregate);
	AggregateVec aggregateVec;
	aggregateVec.push_back(pVectorAggregate);
	aggregateVec.push_back(pListAggregate);
	Client* pClient = new Client(aggregateVec);
	pClient->Print();

	cout<<"******************************************"<<endl;

	Component* pComponent1 = new Composite("Name1", "Description1");
	Component* pComponent2 = new Composite("Name2", "Description2");
	Component* pComponent3 = new Composite("Name3", "Description3");
	Component* pComponent4 = new Composite("Name4", "Description4");

	Component* pComponent = new Composite("Name", "Description");
	pComponent->Add(pComponent1);
	pComponent->Add(pComponent2);
	pComponent->Add(pComponent3);

	pComponent2->Add(new Leaf("LeafName1", "LeafDescription1"));
	pComponent2->Add(pComponent4);
	pComponent4->Add(new Leaf("LeafName2", "LeafDescription2"));

	NewClient* pNewClient = new NewClient(pComponent);
	pNewClient->Print();
	cout<<"******************************************"<<endl;
	pNewClient->NewPrint();

	system("pause");
	return 0;
}