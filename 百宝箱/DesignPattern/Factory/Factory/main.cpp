/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   12:44
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\main.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	main
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <iostream>
using namespace std;

#include "SimpleFactory.h"
#include "PizzaStore.h"

int main()
{
	//简单工厂
	/*SimpleFactory* pSimpleFactory = new SimpleFactory();
	PizzaStore* pPizzaStore = new PizzaStore(pSimpleFactory);
	pPizzaStore->OrderPizza("CheesePizza");*/

	//工厂
	PizzaStore* pPizzaStore = new PizzaStoreA();
	pPizzaStore->OrderPizza("CheesePizza");

	system("pause");
	return 0;
}
