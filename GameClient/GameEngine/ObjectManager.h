/********************************************************************
	created:	2017/02/26
	created:	26:2:2017   14:43
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\GameEngine\ObjectManager.h
	file path:	c:\Users\worldend\Desktop\Game\GameClient\GameEngine
	file base:	ObjectManager
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Singleton.h"
#include "Vertex.h"

class ObjectManager : public Singleton<ObjectManager>
{
public:
	ObjectManager(void);
	~ObjectManager(void);

public:
	bool CreateObject(Vertex args[], int nArraySize);
	bool RenderObject();
};
