#pragma once

#include <vector>
#include <list>
#include <stack>
using namespace std;

#include "IComponent.h"

//class Component;

#include "IIterator.h"

class VectorIterator : public Iterator
{
public:
	VectorIterator(std::vector<int> IntVector) :
	nPosition(0){ m_IntVector = IntVector; };

public:
	bool HasNext()
	{
		if (nPosition >= (int)m_IntVector.size())
		{
			return false;
		}
		return true;
	};

	int Next()
	{
		int nIndex = 0;
		for (std::vector<int>::iterator it = m_IntVector.begin();it != m_IntVector.end();++it)
		{
			if (nIndex == nPosition)
			{
				++nPosition;
				return *it;
			}
			++nIndex;
		}
		return 0;
	};

	Component* Next(int nValue){ return NULL; };

private:
	std::vector<int> m_IntVector;
	int nPosition;
};

class ListIterator : public Iterator
{
public:
	ListIterator(std::list<int> IntList) :
	  nPosition(0){ m_IntList = IntList; };

public:
	bool HasNext()
	{
		if (nPosition >= (int)m_IntList.size())
		{
			return false;
		}
		return true;
	};

	int Next()
	{
		int nIndex = 0;
		for (std::list<int>::iterator it = m_IntList.begin();it != m_IntList.end();++it)
		{
			if (nIndex == nPosition)
			{
				++nPosition;
				return *it;
			}
			++nIndex;
		}
		return 0;
	};

	Component* Next(int nValue){ return NULL; };

private:
	std::list<int> m_IntList;
	int nPosition;
};

class CompositeVectorIterator : public Iterator
{
public:
	CompositeVectorIterator(std::vector<Component*> ComponentVec) :
	  nPosition(0)
	{
		m_ComponentVec = ComponentVec;
	}

public:
	bool HasNext()
	{
		if (nPosition >= (int)m_ComponentVec.size())
		{
			return false;
		}
		return true;
	};
	//int Next(){ return 0; };
	Component* Next(int nValue)
	{
		int nIndex = 0;
		for (std::vector<Component*>::iterator it = m_ComponentVec.begin();it != m_ComponentVec.end();++it)
		{
			if (nIndex == nPosition)
			{
				++nPosition;
				return *it;
			}
			++nIndex;
		}
		return NULL;
	};
	//void Remove(){ };

private:
	std::vector<Component*> m_ComponentVec;
	int nPosition;
};

class CompositeIterator : public Iterator
{
public:
	CompositeIterator(Iterator* pIterator){ m_IteratorStack.push(pIterator); };

public:
	bool HasNext()
	{
		if (m_IteratorStack.empty())
		{
			return false;
		}
		else
		{
			Iterator* pIterator = (Iterator*)m_IteratorStack.top();
			if (!pIterator->HasNext())
			{
				m_IteratorStack.pop();
				return HasNext();
			}
			else
			{
				return true;
			}
		}
	};
	//int Next(){ return 0; };
	Component* Next(int nValue)
	{
		if (HasNext())
		{
			Iterator* pIterator = m_IteratorStack.top();
			Component* pComponent = pIterator->Next(0);
			if (strcmp(pComponent->GetClassName().c_str(), "Composite") == 0)
			{
				m_IteratorStack.push(pComponent->CreateIterator());
			}
			return pComponent;
		}
		return NULL;
	};
	//void Remove(){ };

private:
	std::stack<Iterator*> m_IteratorStack;
};

class NullIterator : public Iterator
{
public:
	bool HasNext()
	{
		return false;
	}
};
