#include "string_util.h"

bool StringUtil::CharIsNull(const char* szStr)
{
	if (szStr == NULL || *szStr == '\0')
	{
		return true;
	}

	return false;
}

void StringUtil::SplitString(const char* szStr, const char* szSplit, output VarList& result)
{
	if (CharIsNull(szStr) || CharIsNull(szSplit))
	{
		return;
	}

	std::string strResult = szStr;
	int nPos = 0;

	while((nPos = strResult.find(szSplit)) != string::npos)
	{
		result << strResult.substr(0, nPos).c_str();
		strResult = strResult.substr(nPos + strlen(szSplit), -1);
	}

	result << strResult.c_str();

	return;
}

float StringUtil::StringToFloat(const char* szStr)
{
	if (CharIsNull(szStr))
	{
		return 0.0f;
	}

	return atof(szStr);
}

D3DCOLORVALUE StringUtil::StringToD3dColorValue(const char* szStr)
{
	D3DCOLORVALUE color;
	color.r = color.g = color.b = color.a = 1.0f;

	VarList args;
	SplitString(szStr, ",", args);
	if (args.GetCount() != 4)
	{
		return color;
	}

	color.r = StringToFloat(args.StringVal(0));
	color.g = StringToFloat(args.StringVal(1));
	color.b = StringToFloat(args.StringVal(2));
	color.a = StringToFloat(args.StringVal(3));

	return color;
}