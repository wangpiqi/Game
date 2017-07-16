/********************************************************************
	created:	2017/02/19
	created:	19:2:2017   20:27
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\Game\Test.h
	file path:	c:\Users\worldend\Desktop\Game\GameClient\Game
	file base:	Test
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Variant\VarList.h"

class Test
{
public:
	Test(void);
	~Test(void);

public:
	void TestXXX();

	void TestPrimitive();
	void TestEvent();

	void TestLight();
	void RenderLight();

private:
	void OnRender(const char* szEvent, VarList& args);
};
