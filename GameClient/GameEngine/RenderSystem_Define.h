#pragma once

struct RenderStructDirectX
{
	IDirect3D9* m_pD3D;
	IDirect3DDevice9* m_pd3dDevice;
	D3DPRESENT_PARAMETERS m_d3dpp;
	IDirect3DVertexBuffer9* m_pVertexBuffer;

	D3DPRIMITIVETYPE m_nType;
	UINT m_nNumVertices;

	RenderStructDirectX() :
	m_pD3D(NULL), m_pd3dDevice(NULL), m_pVertexBuffer(NULL), 
	m_nType(D3DPT_TRIANGLESTRIP), m_nNumVertices(0){ }
};