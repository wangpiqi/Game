/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   15:45
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Strategy\Strategy\main.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Strategy\Strategy
	file base:	main
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <iostream>
using namespace std;

#include "StrategyBase.h"

int main()
{
	StrategyBase* pStrategyChild1 = new StrategyChild1();
	pStrategyChild1->Function();

	StrategyBase* pStrategyChild2 = new StrategyChild2();
	pStrategyChild2->Function();

	StrategyBehaviourChild1* pStrategyBehaviourChild1 = new StrategyBehaviourChild1();
	StrategyBehaviourChild2* pStrategyBehaviourChild2 = new StrategyBehaviourChild2();

	pStrategyChild1->SetStrategyBehaviour(pStrategyBehaviourChild1);
	pStrategyChild1->PerformBehaviour();

	pStrategyChild2->SetStrategyBehaviour(pStrategyBehaviourChild2);
	pStrategyChild2->PerformBehaviour();

	system("pause");
	return 0;
}
