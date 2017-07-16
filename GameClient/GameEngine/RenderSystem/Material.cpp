#include "Material.h"
#include "string_util.h"

void Material::Create(VarList& args)
{
	ZeroMemory( &m_mtrl, sizeof( D3DMATERIAL9 ) );

	const char* szDiffuse = args.StringVal(0);
	m_mtrl.Diffuse = StringUtil::StringToD3dColorValue(szDiffuse);

	const char* szAmbient = args.StringVal(0);
	m_mtrl.Ambient = StringUtil::StringToD3dColorValue(szAmbient);

	return;
}