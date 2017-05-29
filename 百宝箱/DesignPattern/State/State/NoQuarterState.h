#pragma once

#include <iostream>
using namespace std;

#include "state.h"
#include "GumballMachine.h"

//class GumballMachine;

class NoQuarterState :
	public State
{
public:
	NoQuarterState(void);
	NoQuarterState(GumballMachine* pGumballMachine){ m_pGumballMachine = pGumballMachine; };
	~NoQuarterState(void);

public:
	void InsertQuarter()
	{
		cout<<"NoQuarterState InsertQuarter."<<endl;
		m_pGumballMachine->SetState(m_pGumballMachine->GetHasQuarterState());
	};

	void EjectQuarter()
	{
		cout<<"NoQuarterState InsertQuarter."<<endl;
	};

	void TurnCrank()
	{
		cout<<"NoQuarterState InsertQuarter."<<endl;
	};

	void Dispense()
	{
		cout<<"NoQuarterState InsertQuarter."<<endl;
	};

private:
	GumballMachine* m_pGumballMachine;
};
