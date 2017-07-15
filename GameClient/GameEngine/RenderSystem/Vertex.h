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

struct Vertex
{
	FLOAT x, y, z, rhw; // The transformed position for the vertex
	DWORD color;        // The vertex color
	static const DWORD FVF = D3DFVF_XYZRHW|D3DFVF_DIFFUSE;
};

#endif
