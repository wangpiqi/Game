/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   23:11
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate\ConcreteComponent.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate
	file base:	ConcreteComponent
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Component.h"

class ConcreteComponent : public Component
{
public:
	ConcreteComponent(void);
	~ConcreteComponent(void);

public:
	virtual string MethodA(){ return "ConcreteComponent MethodA."; };
	virtual int MethodB(){ return 2; };
};
