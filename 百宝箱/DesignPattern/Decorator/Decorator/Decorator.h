/********************************************************************
	created:	2017/01/27
	created:	27:1:2017   23:14
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate\Decorator.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Decorate\Decorate
	file base:	Decorator
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Component.h"

class Decorator : public Component
{
public:
	Decorator(void);
	virtual ~Decorator(void);

public:
	/*virtual string MethodA(){ return "Decorator MethodA."; };
	virtual int MethodB(){ return 1; };*/

protected:
	Component* m_pComponent;
};
