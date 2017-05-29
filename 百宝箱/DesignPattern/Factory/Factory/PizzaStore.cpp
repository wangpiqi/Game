/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   12:46
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\PizzaStore.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	PizzaStore
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "PizzaStore.h"

PizzaStore::PizzaStore(void)
{
}

PizzaStore::PizzaStore(SimpleFactory* pSimpleFactory) :
m_pSimpleFactory(pSimpleFactory)
{
	//
}

PizzaStore::~PizzaStore(void)
{
	//
}

Pizza* PizzaStore::CreatePizza(std::string strPizzaType)
{
	return m_pSimpleFactory->CreatePizza(strPizzaType);
}

void PizzaStore::OrderPizza(std::string strPizzaType)
{
	Pizza* pPizza = CreatePizza(strPizzaType);
	pPizza->Prepare();
	pPizza->Bake();
	pPizza->Cut();
	pPizza->Box();
}

Pizza* PizzaStoreA::CreatePizza(std::string strPizzaType)
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
