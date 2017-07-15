/********************************************************************
	created:	2017/07/15
	created:	15:7:2017   22:53
	filename: 	d:\Users\worldend\Desktop\Game GitHub\GameClient\Game\EntityB.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\GameClient\Game
	file base:	EntityB
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <iostream>
using namespace std;

#include "Variant\VarList.h"

class EntityB
{
public:
	EntityB(void);
	~EntityB(void);

private:
	void Func(const char* szEvent, VarList& args)
	{
		cout<<"Hello World!"<<endl;
	};
};
