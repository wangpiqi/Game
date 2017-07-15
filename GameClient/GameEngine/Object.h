/********************************************************************
	created:	2017/02/19
	created:	19:2:2017   20:45
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\GameEngine\Object.h
	file path:	c:\Users\worldend\Desktop\Game\GameClient\GameEngine
	file base:	Object
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <d3d9.h>
#include "RenderSystem\Vertex.h"

class Object
{
public:
	Object(void);
	~Object(void);

public:
	bool CreatePrimitive(Vertex args[], int nArraySize);
	bool RenderPrimitive();

private:
	IDirect3DDevice9* m_pd3dDevice;
	IDirect3DVertexBuffer9* m_pVertexBuffer;
};
