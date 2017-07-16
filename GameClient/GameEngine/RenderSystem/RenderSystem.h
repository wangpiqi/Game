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
#include "..\RenderSystem_Define.h"

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

	RenderStructDirectX GetRenderStructDirectX() const { return m_RenderStructDirectX; };

public:
	bool CreatePrimitive(D3DPRIMITIVETYPE nType, Vertex args[], int nArraySize);
	bool SetVertexData(Vertex args[], int nArraySize);
	bool RenderPrimitive();

private:
	RenderStructDirectX m_RenderStructDirectX;
};
