#pragma once

#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "Iterator.h"

//typedef std::vector<Component*> ComponentVector;

#include "IComponent.h"

class Leaf : public Component
{
public:
public:
	Leaf(std::string strName, std::string strDescription) 
	{
		m_strName = strName;
		m_strDescription = strDescription;
	};

	void Print()
	{
		cout<<GetName().c_str()<<"\t"<<GetDescription().c_str()<<endl; 
	};

	Iterator* CreateIterator()
	{
		if (m_pIterator == NULL)
		{
			m_pIterator = new NullIterator(); 
		}
		return m_pIterator;
	};

	std::string GetClassName()
	{
		return "Leaf"; 
	};
};

class Composite : public Component
{
public:
	Composite(std::string strName, std::string strDescription) :
	m_pCompositeVectorIterator(NULL)
	{
		m_strName = strName;
		m_strDescription = strDescription;
	};

public:
	void Add(Component* pComponent){ m_ComponentVec.push_back(pComponent); };
	void Remove(Component* pComponent)
	{
		for (std::vector<Component*>::iterator it = m_ComponentVec.begin();it != m_ComponentVec.end();++it)
		{
			if ((*it) == pComponent)
			{
				it = m_ComponentVec.erase(it);
				break;
			}
		}
	};
	Component* GetChild(int nPosition)
	{
		int nIndex = 0;
		for (std::vector<Component*>::iterator it = m_ComponentVec.begin();it != m_ComponentVec.end();++it)
		{
			if (nIndex == nPosition)
			{
				return (*it);
			}
			++nIndex;
		}
		return NULL;
	};
	void Print()
	{
		cout<<GetName().c_str()<<"\t"<<GetDescription().c_str()<<endl;

		for (std::vector<Component*>::iterator it = m_ComponentVec.begin();it != m_ComponentVec.end();++it)
		{
			(*it)->Print();
		}
	};

	Iterator* CreateIterator()
	{
		if (m_pIterator == NULL)
		{
			m_pCompositeVectorIterator = new CompositeVectorIterator(m_ComponentVec);
			m_pIterator = new CompositeIterator(m_pCompositeVectorIterator); 
		}
		return m_pIterator;
	};

	std::string GetClassName()
	{
		return "Composite"; 
	};

private:
	std::vector<Component*> m_ComponentVec;
	CompositeVectorIterator* m_pCompositeVectorIterator;
};
