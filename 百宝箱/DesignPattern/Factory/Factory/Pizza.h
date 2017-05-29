/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   12:47
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\Pizza.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	Pizza
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <iostream>
using namespace std;

#include "IngredientFactory.h"

class Pizza
{
public:
	Pizza(void);
	~Pizza(void);

public:
	virtual void Prepare(){ };
	virtual void Bake(){ };
	virtual void Cut(){ };
	virtual void Box(){ };

//protected:
//	IngredientFactory* m_pIngredientFactory;
};

class CheesePizza : public Pizza
{
public:
	CheesePizza(IngredientFactory* pIngredientFactory) :
	m_pIngredientFactory(pIngredientFactory)
	{ };

public:
	void Prepare()
	{
		//cout<<"CheesePizza Prepare."<<endl; 
		m_pIngredientFactory->CreateDough();
		m_pIngredientFactory->CreateSauce();
		m_pIngredientFactory->CreateCheese();
	};
	void Bake(){ cout<<"CheesePizza Bake."<<endl; };
	void Cut(){ cout<<"CheesePizza Cut."<<endl; };
	void Box(){ cout<<"CheesePizza Box."<<endl; };

protected:
	IngredientFactory* m_pIngredientFactory;
};

class VeggiePizza : public Pizza
{
public:
	void Prepare(){ cout<<"VeggiePizza Prepare."<<endl; };
	void Bake(){ cout<<"VeggiePizza Bake."<<endl; };
	void Cut(){ cout<<"VeggiePizza Cut."<<endl; };
	void Box(){ cout<<"VeggiePizza Box."<<endl; };
};

class ClamPizza : public Pizza
{
public:
	void Prepare(){ cout<<"ClamPizza Prepare."<<endl; };
	void Bake(){ cout<<"ClamPizza Bake."<<endl; };
	void Cut(){ cout<<"ClamPizza Cut."<<endl; };
	void Box(){ cout<<"ClamPizza Box."<<endl; };
};

class PepperoniPizza : public Pizza
{
public:
	void Prepare(){ cout<<"PepperoniPizza Prepare."<<endl; };
	void Bake(){ cout<<"PepperoniPizza Bake."<<endl; };
	void Cut(){ cout<<"PepperoniPizza Cut."<<endl; };
	void Box(){ cout<<"PepperoniPizza Box."<<endl; };
};
