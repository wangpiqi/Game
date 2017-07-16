/********************************************************************
	created:	2017/02/19
	created:	19:2:2017   20:11
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\GameEngine\Vertex.h
	file path:	c:\Users\worldend\Desktop\Game\GameClient\GameEngine
	file base:	Vertex
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#ifndef _VERTEX_
#define _VERTEX_

#pragma once

#include <d3d9.h>
#include <d3dx9math.h>

struct Vertex
{
	D3DXVECTOR3 position; // The 3D position for the vertex
	D3DXVECTOR3 normal;   // The surface normal for the vertex
	static const DWORD FVF = D3DFVF_XYZ|D3DFVF_NORMAL;
};

#endif
