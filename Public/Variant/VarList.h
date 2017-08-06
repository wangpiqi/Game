/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:43
	filename: 	d:\Users\worldend\Desktop\Game GitHub\百宝箱\GameTool\GameTool\VarList.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\百宝箱\GameTool\GameTool
	file base:	VarList
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#ifndef _VARLIST_H_
#define _VARLIST_H_

#pragma once

#include "Variant.h"
#include "..\macro_util.h"

static const int DATA_SIZE = 1;

class VarList
{
public:
	VarList(void);
	~VarList(void);

	size_t GetCount() const { return m_nDataUsed; };
	void Clear()
	{
		SAFE_DELETE_ARRAY(m_pData);

		m_nDataSize = DATA_SIZE;
		m_nDataUsed = 0;

		m_pData = new Variant[m_nDataSize];
	};

	VTYPE GetType(int nIndex) const 
	{
		if (nIndex >= m_nDataUsed)
		{
			return VTYPE_NULL;
		}

		return m_pData[nIndex].vt; 
	};

	VarList& operator << (int nValue)
	{
		if (m_nDataUsed >= m_nDataSize)
		{
			ExpandMemory();
		}

		m_pData[m_nDataUsed] = nValue;
		++m_nDataUsed;

		return *this;
	};

	VarList& operator << (const char* szValue)
	{
		if (m_nDataUsed >= m_nDataSize)
		{
			ExpandMemory();
		}

		m_pData[m_nDataUsed] = szValue;
		++m_nDataUsed;

		return *this;
	};

	inline int IntVal(int nIndex) const 
	{
		if (nIndex >= m_nDataUsed)
		{
			return 0;
		}

		return m_pData[nIndex].IntVal(); 
	};

	inline const char* StringVal(int nIndex) const 
	{
		if (nIndex >= m_nDataUsed)
		{
			return "";
		}

		return m_pData[nIndex].StringVal(); 
	};

private:
	void ExpandMemory();

private:
	Variant* m_pData;
	int m_nDataSize; //数据总大小
	int m_nDataUsed; //已经使用的数据大小
};

#endif
