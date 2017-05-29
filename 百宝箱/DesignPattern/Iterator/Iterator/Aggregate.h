#pragma once

#include <vector>
#include <list>
using namespace std;

#include "Iterator.h"

class Aggregate
{
public:
	Aggregate(void);
	~Aggregate(void);

public:
	virtual Iterator* CreateIterator(){ return NULL; };
};

class VectorAggregate : public Aggregate
{
public:
	VectorAggregate()
	{
		m_IntVector.push_back(1);
		m_IntVector.push_back(2);
		m_IntVector.push_back(3);
	};

	Iterator* CreateIterator(){ return new VectorIterator(m_IntVector); };

private:
	std::vector<int> m_IntVector;
};

class ListAggregate : public Aggregate
{
public:
	ListAggregate()
	{
		m_IntList.push_back(4);
		m_IntList.push_back(5);
		m_IntList.push_back(6);
	};

	Iterator* CreateIterator(){ return new ListIterator(m_IntList); };

private:
	std::list<int> m_IntList;
};
