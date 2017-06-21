/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:43
	filename: 	d:\Users\worldend\Desktop\Game GitHub\�ٱ���\GameTool\GameTool\VarList.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\�ٱ���\GameTool\GameTool
	file base:	VarList
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#ifndef _VARLIST_H_
#define _VARLIST_H_

#pragma once

#include "Variant.h"

static const int DATA_SIZE = 1;

class VarList
{
public:
	VarList(void);
	~VarList(void);

	VTYPE GetType(int nIndex) const { return m_pData[nIndex].vt; };

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

	inline int IntVal(int nIndex) const 
	{
		if (nIndex > m_nDataUsed)
		{
			return 0;
		}

		return m_pData[nIndex].IntVal(); 
	};

private:
	void ExpandMemory();

private:
	Variant* m_pData;
	int m_nDataSize; //�����ܴ�С
	int m_nDataUsed; //�Ѿ�ʹ�õ����ݴ�С
};

#endif
