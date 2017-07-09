/********************************************************************
	created:	2017/06/17
	created:	17:6:2017   19:43
	filename: 	d:\Users\worldend\Desktop\Game GitHub\∞Ÿ±¶œ‰\GameTool\GameTool\VarList.cpp
	file path:	d:\Users\worldend\Desktop\Game GitHub\∞Ÿ±¶œ‰\GameTool\GameTool
	file base:	VarList
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "VarList.h"

VarList::VarList(void)
{
	m_nDataSize = DATA_SIZE;
	m_nDataUsed = 0;

	m_pData = new Variant[m_nDataSize];
}

VarList::~VarList(void)
{
	delete [] m_pData;
	m_pData = NULL;
}

void VarList::ExpandMemory()
{
	Variant* pNewData = new Variant[m_nDataSize*2];

	for (int i = 0;i < m_nDataSize;++i)
	{
		pNewData[i] = m_pData[i];
	}

	delete m_pData;
	m_pData = pNewData;

	m_nDataSize *= 2;
}
