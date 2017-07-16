/********************************************************************
	created:	2017/07/16
	created:	16:7:2017   10:01
	filename: 	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine\RenderSystem\MaterialManager.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine\RenderSystem
	file base:	MaterialManager
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Singleton.h"
#include "Variant\VarList.h"
#include "Material.h"

class MaterialManager : public Singleton<MaterialManager>
{
public:
	Material* CreateMaterial(VarList& args);
};