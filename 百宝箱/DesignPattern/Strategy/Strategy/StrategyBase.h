/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   15:46
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Strategy\Strategy\Strategy.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Strategy\Strategy
	file base:	Strategy
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <iostream>
using namespace std;

#include "StrategyBehaviourBase.h"

class StrategyBase
{
public:
	StrategyBase(void);
	virtual ~StrategyBase(void);

public:
	virtual void Function(){ cout<<"StrategyBase Function."<<endl; };
	virtual void SetStrategyBehaviour(StrategyBehaviourBase* pStrategyBehaviour){ m_pStrategyBehaviour = pStrategyBehaviour; };
	virtual void PerformBehaviour(){ m_pStrategyBehaviour->BehaviourFunction(); };

protected:
	StrategyBehaviourBase* m_pStrategyBehaviour;
};

class StrategyChild1 : public StrategyBase
{
public:
	StrategyChild1(){ };
	~StrategyChild1(){ };

public:
	void Function(){ cout<<"StrategyChild1 Function."<<endl; };
};

class StrategyChild2 : public StrategyBase
{
public:
	StrategyChild2(){ };
	~StrategyChild2(){ };

public:
	void Function(){ cout<<"StrategyChild2 Function."<<endl; };
};
