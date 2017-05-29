#pragma once

#include <iostream>
using namespace std;

#include "State.h"

class GumballMachine;

class SoldOutState :
	public State
{
public:
	SoldOutState(void);
	SoldOutState(GumballMachine* pGumballMachine){ m_pGumballMachine = pGumballMachine; };
	~SoldOutState(void);

public:
	void InsertQuarter()
	{
		cout<<"SoldOutState InsertQuarter."<<endl;
	};

	void EjectQuarter()
	{
		cout<<"SoldOutState EjectQuarter."<<endl;
	};

	void TurnCrank()
	{
		cout<<"SoldOutState TurnCrank."<<endl;
	};

	void Dispense()
	{
		cout<<"SoldOutState Dispense."<<endl;
	};

private:
	GumballMachine* m_pGumballMachine;
};
