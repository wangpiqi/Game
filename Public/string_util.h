#pragma once

#include "macro_util.h"
#include <d3d9.h>

class StringUtil
{
public:
	static bool CharIsNull(const char* szStr);
	static void SplitString(const char* szStr, const char* szSplit, output VarList& result);

	static float StringToFloat(const char* szStr);
	static D3DCOLORVALUE StringToD3dColorValue(const char* szStr);
};