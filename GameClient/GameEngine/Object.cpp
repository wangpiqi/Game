/********************************************************************
	created:	2017/02/19
	created:	19:2:2017   20:45
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\GameEngine\Object.cpp
	file path:	c:\Users\worldend\Desktop\Game\GameClient\GameEngine
	file base:	Object
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "Object.h"

Object::Object(void) :
m_pd3dDevice(NULL),
m_pVertexBuffer(NULL)
{
}

Object::~Object(void)
{
}

bool Object::CreatePrimitive(Vertex args[], int nArraySize)
{
	return true;
}

bool Object::RenderPrimitive()
{
	return true;
}
