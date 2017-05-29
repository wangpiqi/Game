/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   12:43
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\SimpleFactory.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	SimpleFactory
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "SimpleFactory.h"

SimpleFactory::SimpleFactory(void)
{
}

SimpleFactory::~SimpleFactory(void)
{
}

Pizza* SimpleFactory::CreatePizza(std::string strPizzaType)
{
	Pizza* pPizza = NULL;

	if (strPizzaType == "CheesePizza")
	{
		NyIngredientFactory* pNyIngredientFactory = new NyIngredientFactory();
		pPizza = new CheesePizza(pNyIngredientFactory);
	}
	else if (strPizzaType == "VeggiePizza")
	{
		pPizza = new VeggiePizza();
	}
	else if (strPizzaType == "ClamPizza")
	{
		pPizza = new ClamPizza();
	}
	else if (strPizzaType == "PepperoniPizza")
	{
		pPizza = new PepperoniPizza();
	}

	return pPizza;
}
