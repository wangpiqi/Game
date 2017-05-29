/********************************************************************
	created:	2016/11/14
	created:	14:11:2016   20:23
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\RenderSystem.h
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	RenderSystem
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Singleton.h"
#include <d3d9.h>
#include "Vertex.h"

#define RenderSystemInst RenderSystem::GetSingleton()

class RenderSystem : public Singleton<RenderSystem>
{
public:
	RenderSystem(void);
	virtual ~RenderSystem(void);

public:
	bool Init(){ return true; };
	bool Run(){ return true; };
	bool Shut(){ return true; };

	bool InitRenderSystem(HWND hWnd, bool bFullScreen);
	bool RunRenderSystem();
	bool ShutRenderSystem();

	bool Render();
	bool OnRender();

public:
	bool CreatePrimitive(Vertex args[], int nArraySize);
	bool RenderPrimitive();

private:
	IDirect3D9* m_pD3D;
	IDirect3DDevice9* m_pd3dDevice;

	D3DPRESENT_PARAMETERS m_d3dpp;

	IDirect3DVertexBuffer9* m_pVertexBuffer;
};
