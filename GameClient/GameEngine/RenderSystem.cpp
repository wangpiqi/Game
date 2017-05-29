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

RenderSystem::RenderSystem(void) :
m_pD3D(NULL),
m_pd3dDevice(NULL),
m_pVertexBuffer(NULL)
{
	//
}

RenderSystem::~RenderSystem(void)
{
	//
}

bool RenderSystem::InitRenderSystem(HWND hWnd, bool bFullScreen)
{
	HRESULT hr = S_FALSE;

	m_pD3D = Direct3DCreate9( D3D_SDK_VERSION );
	NULL_RETURN(m_pD3D, false);

	ZeroMemory(&m_d3dpp, sizeof(m_d3dpp));
	m_d3dpp.Windowed = !bFullScreen;
	m_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	m_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

	hr = m_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, 
		&m_d3dpp, &m_pd3dDevice);

	if (FAILED(hr))
	{
		return false;
	}

	return true;
}

bool RenderSystem::RunRenderSystem()
{
	// Begin the scene
	if( SUCCEEDED( m_pd3dDevice->BeginScene() ) )
	{
		Render();
		// End the scene
		m_pd3dDevice->EndScene();
	}

	// Present the backbuffer contents to the display
	m_pd3dDevice->Present( NULL, NULL, NULL, NULL );

	return true;
}

bool RenderSystem::ShutRenderSystem()
{
	SAFE_RELEASE(m_pVertexBuffer);
	SAFE_RELEASE(m_pd3dDevice);
	SAFE_RELEASE(m_pD3D);
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
	return true;
}

bool RenderSystem::CreatePrimitive(Vertex args[], int nArraySize)
{
	if (FAILED(m_pd3dDevice->CreateVertexBuffer(nArraySize*sizeof(Vertex), 0, Vertex::FVF, D3DPOOL_DEFAULT, &m_pVertexBuffer, NULL)))
	{
		return false;
	}

	Vertex* pVertices;
	if( FAILED( m_pVertexBuffer->Lock( 0, nArraySize*sizeof( Vertex ), ( void** )&pVertices, 0 ) ) )
		return false;
	for (int i = 0;i < nArraySize;++i)
	{
		pVertices[i] = args[i];
	}
	m_pVertexBuffer->Unlock();

	return true;
}

bool RenderSystem::RenderPrimitive()
{
	HRESULT hr = S_FALSE;
	hr = m_pd3dDevice->SetStreamSource( 0, m_pVertexBuffer, 0, sizeof( Vertex ) );
	hr = m_pd3dDevice->SetFVF( Vertex::FVF );
	hr = m_pd3dDevice->DrawPrimitive( D3DPT_TRIANGLELIST, 0, 1 );
	return true;
}

