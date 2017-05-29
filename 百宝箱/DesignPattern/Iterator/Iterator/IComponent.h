#pragma once

#include <iostream>
using namespace std;

#include "IIterator.h"

class Component
{
public:
	Component(void);
	~Component(void);

public:
	virtual void Add(Component* pComponent)
	{
		throw exception(); 
	};

	virtual void Remove(){ throw exception(); };
	virtual void GetChild(){ throw exception(); };
	virtual void Print()
	{
		//throw exception(); 
		//cout<<GetName().c_str()<<"\t"<<GetDescription().c_str()<<endl;
	};

	virtual void NewPrint()
	{
		cout<<GetName().c_str()<<"\t"<<GetDescription().c_str()<<endl;
	};

	std::string GetName() const { return m_strName; };
	std::string GetDescription() const { return m_strDescription; };

	virtual Iterator* CreateIterator()
	{
		//return new NullIterator(); 
		return m_pIterator;
	};

	virtual std::string GetClassName(){ return ""; };

protected:
	std::string m_strName;
	std::string m_strDescription;
	Iterator* m_pIterator;
};