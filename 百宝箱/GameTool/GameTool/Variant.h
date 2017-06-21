/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:08
	filename: 	d:\Users\worldend\Desktop\Game GitHub\�ٱ���\GameTool\GameTool\Variant.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\�ٱ���\GameTool\GameTool
	file base:	Variant
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#ifndef _VARIANT_H_
#define _VARIANT_H_

#pragma once

#include "Variant_Define.h"

struct Variant
{
	VDATA vdata; //����
	VTYPE vt; //��������

	VTYPE GetType() const { return vt; };

	Variant& operator = (int nValue)
	{
		vdata.intValue = nValue; 
		vt = VTYPE_INT;
		return *this;
	};

	Variant& operator = (const char* szValue)
	{
		vdata.stringValue = szValue; 
		vt = VTYPE_STRING;
		return *this;
	};

	inline int IntVal() const { return vdata.intValue; };
	inline const char* StringVal() const { return vdata.stringValue; };
};

#endif
