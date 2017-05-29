/********************************************************************
	created:	2017/01/28
	created:	28:1:2017   21:00
	filename: 	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command\main.cpp
	file path:	c:\Users\worldend\Desktop\Game\DesignPattern\Command\Command
	file base:	main
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include<iostream>
using namespace std;

#include "Entity.h"
#include "Command.h"
#include "SimpleRemoteControl.h"

int main()
{
	Light* pLight = new Light();
	Command* pCommand = new LightOnCommand(pLight);

	SimpleRemoteControl* pSimpleRemoteControl = new SimpleRemoteControl();
	pSimpleRemoteControl->SetCommand(pCommand);
	pSimpleRemoteControl->ButtonWasPressed();

	system("pause");
	return 0;
}
