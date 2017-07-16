/********************************************************************
	created:	2017/07/16
	created:	16:7:2017   10:01
	filename: 	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine\RenderSystem\MaterialManager.cpp
	file path:	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine\RenderSystem
	file base:	MaterialManager
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "MaterialManager.h"

Material* MaterialManager::CreateMaterial(VarList& args)
{
	Material* pMaterial = new Material();
	pMaterial->Create(args);
	return pMaterial;
}