/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:08
	filename: 	d:\Users\worldend\Desktop\Game GitHub\百宝箱\GameTool\GameTool\Variant.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\百宝箱\GameTool\GameTool
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
	VDATA vdata; //数据
	VTYPE vt; //数据类型

	inline int IntVal() const { return vdata.intValue; };
};

#endif
