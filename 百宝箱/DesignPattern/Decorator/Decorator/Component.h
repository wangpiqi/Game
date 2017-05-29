/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   23:08
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate\Component.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate
	file base:	Component
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <string>
using namespace std;

class Component
{
public:
	Component(void);
	virtual ~Component(void);

public:
	virtual string MethodA(){ return "Component MethodA."; };
	virtual int MethodB(){ return 1; };
};
