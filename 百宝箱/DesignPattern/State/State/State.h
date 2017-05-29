#pragma once

#include <iostream>
using namespace std;

//#include "GumballMachine.h"

class State
{
public:
	State(void){ };
	/*State(GumballMachine* pGumballMachine)
	{ m_pGumballMachine = pGumballMachine; }*/

	virtual ~State(void);

public:
	virtual void InsertQuarter(){ };
	virtual void EjectQuarter(){ };
	virtual void TurnCrank(){ };
	virtual void Dispense(){ };

//protected:
//	GumballMachine* m_pGumballMachine;
};
