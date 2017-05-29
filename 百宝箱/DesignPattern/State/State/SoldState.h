#pragma once

#include "state.h"
#include "GumballMachine.h"

class SoldState :
	public State
{
public:
	SoldState(void);
	SoldState(GumballMachine* pGumballMachine){ m_pGumballMachine = pGumballMachine; };
	~SoldState(void);

public:
	void InsertQuarter()
	{
		cout<<"SoldState InsertQuarter."<<endl;
		m_pGumballMachine->SetState(m_pGumballMachine->GetHasQuarterState());
	};

	void EjectQuarter()
	{
		cout<<"SoldState EjectQuarter."<<endl;
	};

	void TurnCrank()
	{
		cout<<"SoldState TurnCrank."<<endl;
	};

	void Dispense()
	{
		cout<<"SoldState Dispense."<<endl;
	};

private:
	GumballMachine* m_pGumballMachine;
};
