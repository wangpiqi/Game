#pragma once

#include "state.h"
#include "GumballMachine.h"

class HasQuarterState :
	public State
{
public:
	HasQuarterState(void);
	HasQuarterState(GumballMachine* pGumballMachine){ m_pGumballMachine = pGumballMachine; };
	~HasQuarterState(void);

public:
	void InsertQuarter()
	{
		cout<<"HasQuarterState InsertQuarter."<<endl;
	};

	void EjectQuarter()
	{
		cout<<"HasQuarterState EjectQuarter."<<endl;
		m_pGumballMachine->SetState(m_pGumballMachine->GetNoQuarterState());
	};

	void TurnCrank()
	{
		cout<<"HasQuarterState TurnCrank."<<endl;
	};

	void Dispense()
	{
		cout<<"HasQuarterState Dispense."<<endl;
		m_pGumballMachine->SetState(m_pGumballMachine->GetSoldState());
	};

private:
	GumballMachine* m_pGumballMachine;
};
