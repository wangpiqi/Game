/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:31
	filename: 	d:\Users\worldend\Desktop\Game GitHub\∞Ÿ±¶œ‰\GameTool\GameTool\Variant_Define.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\∞Ÿ±¶œ‰\GameTool\GameTool
	file base:	Variant_Define
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#ifndef _VARIANT_DEFINE_H_
#define _VARIANT_DEFINE_H_

#pragma once

#include <Windows.h>

union VDATA
{
	char charVal; //VTYPE_CHAR
	short shortVal; //VTYPE_SHORT
	int intVal; //VTYPE_INT
	INT64 int64Val; //VTYPE_INT64
	float floatVal; //VTYPE_FLOAT
	double doubleVal; //VTYPE_DOUBLE
	void* pointVal; //VTYPE_POINT
};

enum VTYPE
{
	VTYPE_NULL,

	VTYPE_CHAR,
	VTYPE_SHORT,
	VTYPE_INT,
	VTYPE_INT64,
	VTYPE_FLOAT,
	VTYPE_DOUBLE,
	VTYPE_POINT,

	VTYPE_MAX,
};

#endif