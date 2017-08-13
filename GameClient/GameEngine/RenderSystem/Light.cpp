#include "Light.h"
#include "string_util.h"
#include "..\RenderSystem_Define.h"
#include "RenderSystem.h"

void Light::Create(VarList& args)
{
	ZeroMemory( &m_light, sizeof( D3DLIGHT9 ) );

	m_nLightType = (LIGHT_TYPE)args.IntVal(0);
	switch(m_nLightType)
	{
	case LIGHT_TYPE_POINT:
		{
			//
		}
		break;
	case LIGHT_TYPE_SPOT:
		{
			//
		}
		break;
	case LIGHT_TYPE_DIRECTIONAL:
		{
			m_light.Type = D3DLIGHT_DIRECTIONAL;
			m_light.Diffuse = StringUtil::StringToD3dColorValue(args.StringVal(1));
			D3DXVec3Normalize( ( D3DXVECTOR3* )&m_light.Direction, &D3DXVECTOR3( cosf( timeGetTime() / 350.0f ), 1.0f, sinf( timeGetTime() / 350.0f ) ) );
			m_light.Range = 1000.0f;
		}
		break;
	}

	RenderStructDirectX rsDirectX = RenderSystem::GetSingleton()->GetRenderStructDirectX();
	rsDirectX.m_pd3dDevice->SetLight( 0, &m_light );
	rsDirectX.m_pd3dDevice->LightEnable( 0, TRUE );

	return;
}