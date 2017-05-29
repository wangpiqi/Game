/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   21:21
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command\SimpleRemoteControl.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command
	file base:	SimpleRemoteControl
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Command.h"

class SimpleRemoteControl
{
public:
	SimpleRemoteControl(void);
	~SimpleRemoteControl(void);

public:
	void SetCommand(Command* pCommand){ m_pCommand = pCommand; };
	void ButtonWasPressed(){ m_pCommand->Execute(); };

private:
	Command* m_pCommand;
};
