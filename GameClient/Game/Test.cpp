/********************************************************************
	created:	2017/02/19
	created:	19:2:2017   20:27
	filename: 	c:\Users\worldend\Desktop\Game\GameClient\Game\Test.cpp
	file path:	c:\Users\worldend\Desktop\Game\GameClient\Game
	file base:	Test
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "Test.h"
#include "RenderSystem\RenderSystem.h"
#include "macro_util.h"
#include "EntityA.h"
#include "EntityB.h"
#include "RenderSystem\MaterialManager.h"

Test::Test(void)
{
	REG_EVENT("OnRender", &Test::OnRender);
}

Test::~Test(void)
{
}

void Test::TestXXX()
{
	//TestPrimitive();
	//TestEvent();
	TestLight();
}

void Test::TestPrimitive()
{
	// Initialize three Vertices for rendering a triangle
	//Vertex Vertices[] =
	//{
	//	{ 150.0f,  50.0f, 0.5f, 1.0f, 0xffff0000, }, // x, y, z, rhw, color
	//	{ 250.0f, 250.0f, 0.5f, 1.0f, 0xff00ff00, },
	//	{  50.0f, 250.0f, 0.5f, 1.0f, 0xff00ffff, },
	//};

	//int nArraySize = ARRAY_SIZE(Vertices);

	//RenderSystemInst->CreatePrimitive(Vertices, nArraySize);
}

void Test::TestEvent()
{
	EntityA entityA;
	EntityB entityB;

	entityA.Func();
}

void Test::TestLight()
{
	Vertex Vertices[50 * 2] = {};
	for( DWORD i = 0; i < 50; i++ )
	{
		FLOAT theta = ( 2 * D3DX_PI * i ) / ( 50 - 1 );
		Vertices[2 * i + 0].position = D3DXVECTOR3( sinf( theta ), -1.0f, cosf( theta ) );
		Vertices[2 * i + 0].normal = D3DXVECTOR3( sinf( theta ), 0.0f, cosf( theta ) );
		Vertices[2 * i + 1].position = D3DXVECTOR3( sinf( theta ), 1.0f, cosf( theta ) );
		Vertices[2 * i + 1].normal = D3DXVECTOR3( sinf( theta ), 0.0f, cosf( theta ) );
	}

	RenderSystem::GetSingleton()->CreatePrimitive(D3DPT_TRIANGLESTRIP, Vertices, ARRAY_SIZE(Vertices));

	//´´½¨²ÄÖÊ
	VarList args;
	std::string strDiffuse = "1.0f, 1.0f, 0.0f, 1.0f";
	std::string strAmbient = "1.0f, 1.0f, 0.0f, 1.0f";
	args << strDiffuse.c_str() << strAmbient.c_str();
	Material* pMaterial = MaterialManager::GetSingleton()->CreateMaterial(args);
	RenderStructDirectX rsDirectX = RenderSystem::GetSingleton()->GetRenderStructDirectX();
	rsDirectX.m_pd3dDevice->SetMaterial(&pMaterial->GetMaterial());

	return;
}

void Test::RenderLight()
{
	RenderStructDirectX stDirectX = RenderSystem::GetSingleton()->GetRenderStructDirectX();

	D3DXMATRIXA16 matWorld;
	D3DXMatrixIdentity( &matWorld );
	D3DXMatrixRotationX( &matWorld, timeGetTime() / 500.0f );
	stDirectX.m_pd3dDevice->SetTransform( D3DTS_WORLD, &matWorld );

	D3DXVECTOR3 vEyePt( 0.0f, 3.0f,-5.0f );
	D3DXVECTOR3 vLookatPt( 0.0f, 0.0f, 0.0f );
	D3DXVECTOR3 vUpVec( 0.0f, 1.0f, 0.0f );
	D3DXMATRIXA16 matView;
	D3DXMatrixLookAtLH( &matView, &vEyePt, &vLookatPt, &vUpVec );
	stDirectX.m_pd3dDevice->SetTransform( D3DTS_VIEW, &matView );

	D3DXMATRIXA16 matProj;
	D3DXMatrixPerspectiveFovLH( &matProj, D3DX_PI / 4, 1.0f, 1.0f, 100.0f );
	stDirectX.m_pd3dDevice->SetTransform( D3DTS_PROJECTION, &matProj );

	return;
}

void Test::OnRender(const char* szEvent, VarList& args)
{
	RenderLight();

	return;
}
