/********************************************************************
	created:	2017/02/19
	created:	19:2:2017   20:27
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\Game\Test.cpp
	file path:	c:\Users\worldend\Desktop\Game\GameClient\Game
	file base:	Test
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "Test.h"
#include "RenderSystem\RenderSystem.h"
#include "macro_util.h"
#include "EntityA.h"
#include "EntityB.h"

Test::Test(void)
{
}

Test::~Test(void)
{
}

void Test::TestXXX()
{
	TestPrimitive();
	//TestEvent();
}

void Test::TestPrimitive()
{
	// Initialize three Vertices for rendering a triangle
	Vertex Vertices[] =
	{
		{ 150.0f,  50.0f, 0.5f, 1.0f, 0xffff0000, }, // x, y, z, rhw, color
		{ 250.0f, 250.0f, 0.5f, 1.0f, 0xff00ff00, },
		{  50.0f, 250.0f, 0.5f, 1.0f, 0xff00ffff, },
	};

	int nArraySize = ARRAY_SIZE(Vertices);

	RenderSystemInst->CreatePrimitive(Vertices, nArraySize);
}

void Test::TestEvent()
{
	EntityA entityA;
	EntityB entityB;

	entityA.Func();
}
