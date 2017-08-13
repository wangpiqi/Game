/********************************************************************
	created:	2016/11/14
	created:	14:11:2016   20:23
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\RenderSystem.cpp
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	RenderSystem
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "RenderSystem.h"
#include "macro_util.h"
#include <assert.h>

#define CLEAR_FLAGS (D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER | D3DCLEAR_STENCIL)
#define CLEAR_COLOR D3DCOLOR_XRGB( 0, 200, 200 )

RenderSystem::RenderSystem(void)
{
	//
}

RenderSystem::~RenderSystem(void)
{
	//
}

bool RenderSystem::InitRenderSystem(const WindowsStruct& stWindows)
{
	HRESULT hr = S_FALSE;

	m_RenderStructDirectX.m_pD3D = Direct3DCreate9( D3D_SDK_VERSION );
	NULL_RETURN(m_RenderStructDirectX.m_pD3D, false);

	ZeroMemory(&m_RenderStructDirectX.m_d3dpp, sizeof(m_RenderStructDirectX.m_d3dpp));
	m_RenderStructDirectX.m_d3dpp.Windowed = !stWindows.bFullScreen;
	m_RenderStructDirectX.m_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	m_RenderStructDirectX.m_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
	m_RenderStructDirectX.m_d3dpp.EnableAutoDepthStencil = TRUE;
	m_RenderStructDirectX.m_d3dpp.AutoDepthStencilFormat = D3DFMT_D24S8;
	m_RenderStructDirectX.m_d3dpp.BackBufferWidth = stWindows.nWidth;
	m_RenderStructDirectX.m_d3dpp.BackBufferHeight = stWindows.nHeight;

	hr = m_RenderStructDirectX.m_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, stWindows.hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, 
		&m_RenderStructDirectX.m_d3dpp, &m_RenderStructDirectX.m_pd3dDevice);

	if (FAILED(hr))
	{
		assert(0);
		return false;
	}

	SetRenderState();

	return true;
}

bool RenderSystem::RunRenderSystem()
{
	HRESULT hr = m_RenderStructDirectX.m_pd3dDevice->Clear( 0, NULL, CLEAR_FLAGS,
		CLEAR_COLOR, 1.0f, 0 );

	// Begin the scene
	if( SUCCEEDED( m_RenderStructDirectX.m_pd3dDevice->BeginScene() ) )
	{
		Render();
		// End the scene
		m_RenderStructDirectX.m_pd3dDevice->EndScene();
	}

	// Present the backbuffer contents to the display
	m_RenderStructDirectX.m_pd3dDevice->Present( 0, 0, 0, 0 );

	return true;
}

bool RenderSystem::ShutRenderSystem()
{
	SAFE_RELEASE(m_RenderStructDirectX.m_pVertexBuffer);
	SAFE_RELEASE(m_RenderStructDirectX.m_pd3dDevice);
	SAFE_RELEASE(m_RenderStructDirectX.m_pD3D);
	return true;
}

bool RenderSystem::Render()
{
	//

	OnRender();

	return true;
}

bool RenderSystem::OnRender()
{
	RenderPrimitive();

	SEND_EVENT("OnRender");

	return true;
}

bool RenderSystem::CreatePrimitive(D3DPRIMITIVETYPE nType, Vertex args[], int nArraySize)
{
	if (FAILED(m_RenderStructDirectX.m_pd3dDevice->CreateVertexBuffer(nArraySize*sizeof(Vertex), 0, Vertex::FVF, D3DPOOL_DEFAULT, 
		&m_RenderStructDirectX.m_pVertexBuffer, NULL)))
	{
		return false;
	}

	m_RenderStructDirectX.m_nType = nType;
	m_RenderStructDirectX.m_nNumVertices = nArraySize;

	SetVertexData(args, nArraySize);

	return true;
}

bool RenderSystem::SetVertexData(Vertex args[], int nArraySize)
{
	Vertex* pVertices = NULL;

	if( FAILED( m_RenderStructDirectX.m_pVertexBuffer->Lock( 0, nArraySize*sizeof( Vertex ), ( void** )&pVertices, 0 ) ) )
		return false;

	for (int i = 0;i < nArraySize;++i)
	{
		pVertices[i] = args[i];
	}

	m_RenderStructDirectX.m_pVertexBuffer->Unlock();

	return true;
}

bool RenderSystem::RenderPrimitive()
{
	HRESULT hr = S_FALSE;
	hr = m_RenderStructDirectX.m_pd3dDevice->SetStreamSource( 0, m_RenderStructDirectX.m_pVertexBuffer, 0, sizeof( Vertex ) );
	hr = m_RenderStructDirectX.m_pd3dDevice->SetFVF( Vertex::FVF );

	UINT nPrimitiveCount = 1;
	switch(m_RenderStructDirectX.m_nType)
	{
	case D3DPT_TRIANGLELIST:
		{
			nPrimitiveCount = m_RenderStructDirectX.m_nNumVertices / 3;
		}
		break;
	case D3DPT_TRIANGLESTRIP:
		{
			nPrimitiveCount = m_RenderStructDirectX.m_nNumVertices - 2;
		}
		break;
	}

	hr = m_RenderStructDirectX.m_pd3dDevice->DrawPrimitive( m_RenderStructDirectX.m_nType, 0, nPrimitiveCount );

	return true;
}

void RenderSystem::SetRenderState()
{
	HRESULT hr = m_RenderStructDirectX.m_pd3dDevice->SetRenderState( D3DRS_CULLMODE, D3DCULL_NONE );
	hr = m_RenderStructDirectX.m_pd3dDevice->SetRenderState( D3DRS_ZENABLE, TRUE );
	hr = m_RenderStructDirectX.m_pd3dDevice->SetRenderState( D3DRS_LIGHTING, TRUE );

	return;
}

