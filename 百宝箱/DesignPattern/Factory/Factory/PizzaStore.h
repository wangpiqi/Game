/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   12:46
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\PizzaStore.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	PizzaStore
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "SimpleFactory.h"

class PizzaStore
{
public:
	PizzaStore(void);
	PizzaStore(SimpleFactory* pSimpleFactory);
	~PizzaStore(void);

public:
	virtual Pizza* CreatePizza(std::string strPizzaType);
	void OrderPizza(std::string strPizzaType);

private:
	SimpleFactory* m_pSimpleFactory;
};

class PizzaStoreA : public PizzaStore
{
public:
	Pizza* CreatePizza(std::string strPizzaType);
};
