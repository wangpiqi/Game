/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   14:09
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory\IngredientFactory.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Factory\Factory
	file base:	IngredientFactory
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <iostream>
using namespace std;

class IngredientFactory
{
public:
	IngredientFactory(void);
	~IngredientFactory(void);

public:
	virtual void CreateDough(){ };
	virtual void CreateSauce(){ };
	virtual void CreateCheese(){ };
};

class NyIngredientFactory : public IngredientFactory
{
public:
	void CreateDough(){ cout<<"NyIngredientFactory CreateDough."<<endl; };
	void CreateSauce(){ cout<<"NyIngredientFactory CreateSauce."<<endl; };
	void CreateCheese(){ cout<<"NyIngredientFactory CreateCheese."<<endl; };
};
