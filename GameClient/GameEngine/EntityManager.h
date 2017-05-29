/********************************************************************
	created:	2016/11/13
	created:	13:11:2016   15:32
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\EntityManager.h
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	EntityManager
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include<map>
using namespace std;

#include "IEntity.h"
#include "..\Public\Singleton.h"

typedef std::map<int, IEntity*> EntityMap;

class EntityManager : public Singleton<EntityManager>
{
public:
	EntityManager(void);
	~EntityManager(void);

public:
	bool Init(){ return true; };
	bool Run(){ return true; };
	bool Shut(){ return true; };

public:
	IEntity* CreateEntity();
	static int AddEntity(IEntity* pEntity);
	bool DestroyEntity();

	bool Destroy();

	static int GetUniqueId()
	{
		static int nUniqueId = 0;
		return nUniqueId++;
	};

private:
	static EntityMap s_EntityMap;
};
