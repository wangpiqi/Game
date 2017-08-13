#pragma once

#include "Variant\VarList.h"
#include "d3d9.h"

enum LIGHT_TYPE
{
	LIGHT_TYPE_POINT,
	LIGHT_TYPE_SPOT,
	LIGHT_TYPE_DIRECTIONAL,
};

class Light
{
public:
	void Create(VarList& args);

private:
	D3DLIGHT9 m_light;
	LIGHT_TYPE m_nLightType;
};