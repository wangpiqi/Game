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

#include <string>
using namespace std;

#include <Windows.h>

union VDATA
{
	char charValue; //VTYPE_CHAR
	short shortValue; //VTYPE_SHORT
	int intValue; //VTYPE_INT
	INT64 int64Value; //VTYPE_INT64
	float floatValue; //VTYPE_FLOAT
	double doubleValue; //VTYPE_DOUBLE
	void* pointValue; //VTYPE_POINT
	const char* stringValue; //VTYPE_STRING
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
	VTYPE_STRING,

	VTYPE_MAX,
};

#endif