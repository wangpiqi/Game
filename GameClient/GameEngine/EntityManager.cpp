/********************************************************************
	created:	2016/11/13
	created:	13:11:2016   15:32
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\EntityManager.cpp
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	EntityManager
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <stdio.h>
#include "EntityManager.h"
#include "..\Public\macro_util.h"

EntityMap EntityManager::s_EntityMap;

EntityManager::EntityManager(void)
{
	s_EntityMap.clear();
}

EntityManager::~EntityManager(void)
{
	Destroy();
}

IEntity* EntityManager::CreateEntity()
{
	return NULL;
}

int EntityManager::AddEntity(IEntity* pEntity)
{
	NULL_RETURN(pEntity, 0);

	int nUniqueId = GetUniqueId();
	s_EntityMap.insert(std::make_pair(nUniqueId, pEntity));

	return nUniqueId;
}

bool EntityManager::DestroyEntity()
{
	return true;
}

bool EntityManager::Destroy()
{
	if(s_EntityMap.size() == 0)
		return true;

	for (EntityMap::iterator it = s_EntityMap.begin();it != s_EntityMap.end();++it)
	{
		SAFE_DELETE(it->second);
	}

	return true;
}
