#pragma once

#include "Variant\VarList.h"
#include <d3d9.h>

class Material
{
public:
	void Create(VarList& args);

	D3DMATERIAL9 GetMaterial(){ return m_mtrl; };

private:
	D3DMATERIAL9 m_mtrl;
};