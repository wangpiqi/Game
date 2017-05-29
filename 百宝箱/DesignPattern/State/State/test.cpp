#include <iostream>
using namespace std;

#include "GumballMachine.h"

int main()
{
	GumballMachine* pGumballMachine = new GumballMachine(3);
	pGumballMachine->InsertQuarter();
	pGumballMachine->TurnCrank();

	system("pause");
	return 0;
}