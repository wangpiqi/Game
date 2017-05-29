/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   12:43
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\SimpleFactory.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	SimpleFactory
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <string>
using namespace std;

#include "Pizza.h"

class SimpleFactory
{
public:
	SimpleFactory(void);
	~SimpleFactory(void);

public:
	Pizza* CreatePizza(std::string strPizzaType);
};
