/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   21:05
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command\Entity.h
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command
	file base:	Entity
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include<iostream>
using namespace std;

//#include "Command.h"

//class Command;

class Entity
{
public:
	Entity(void);
	~Entity(void);
};

//class SimpleRemoteControl
//{
//public:
//	void SetCommand(Command* pCommand){ m_pCommand = pCommand; };
//	void ButtonWasPressed(){ m_pCommand->Execute(); };
//
//private:
//	Command* m_pCommand;
//};

class Light : public Entity
{
public:
	void On(){ cout<<"Light On."<<endl; };
	void Off(){ cout<<"Light Off."<<endl; };
};
