/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   20:59
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command\Command.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command
	file base:	Command
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Entity.h"

class Command
{
public:
	Command(void);
	~Command(void);

public:
	virtual void Execute(){ };
};

class LightOnCommand : public Command
{
public:
	LightOnCommand(Light* pLight) :
	m_pLight(pLight){ };

public:
	void Execute(){ m_pLight->On(); };

private:
	Light* m_pLight;
};
