#pragma once

#include "State.h"

//class State;

class GumballMachine
{
public:
	GumballMachine(int nCount);
	~GumballMachine(void);

public:
	void InsertQuarter()
	{
		m_pState->InsertQuarter(); 
	};

	void EjectQuarter()
	{
		m_pState->EjectQuarter(); 
	};

	void TurnCrank()
	{
		m_pState->TurnCrank(); 
		m_pState->Dispense();
	};

	//void Dispense(){ m_pState->Dispense(); };

	void SetState(State* pState){ m_pState = pState; };

	State* GetSoldOutState(){ return m_pSoldOutState; };
	State* GetNoQuarterState(){ return m_pNoQuarterState; };
	State* GetHasQuarterState(){ return m_pHasQuarterState; };
	State* GetSoldState(){ return m_pSoldState; };

private:
	State* m_pSoldOutState;
	State* m_pNoQuarterState;
	State* m_pHasQuarterState;
	State* m_pSoldState;

	State* m_pState;
	int m_nCount;
};
