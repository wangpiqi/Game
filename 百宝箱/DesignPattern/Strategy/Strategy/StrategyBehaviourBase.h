/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   16:07
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Strategy\Strategy\StrategyBehaviourBase.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Strategy\Strategy
	file base:	StrategyBehaviourBase
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <iostream>
using namespace std;

class StrategyBehaviourBase
{
public:
	StrategyBehaviourBase(void);
	~StrategyBehaviourBase(void);

public:
	virtual void BehaviourFunction(){ cout<<"StrategyBehaviourBase BehaviourFunction."<<endl; };
};

class StrategyBehaviourChild1 : public StrategyBehaviourBase
{
public:
	StrategyBehaviourChild1(){ };
	~StrategyBehaviourChild1(){ };

public:
	virtual void BehaviourFunction(){ cout<<"StrategyBehaviourChild1 BehaviourFunction."<<endl; };
};

class StrategyBehaviourChild2 : public StrategyBehaviourBase
{
public:
	StrategyBehaviourChild2(){ };
	~StrategyBehaviourChild2(){ };

public:
	virtual void BehaviourFunction(){ cout<<"StrategyBehaviourChild2 BehaviourFunction."<<endl; };
};
