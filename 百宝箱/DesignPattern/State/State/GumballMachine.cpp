#include "GumballMachine.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"

GumballMachine::GumballMachine(int nCount)
{
	m_pSoldOutState = new SoldOutState(this);
	m_pNoQuarterState = new NoQuarterState(this);
	m_pHasQuarterState = new HasQuarterState(this);
	m_pSoldState = new SoldState(this);

	m_pState = m_pSoldOutState;

	m_nCount = nCount;

	if (m_nCount > 0)
	{
		m_pState = m_pNoQuarterState;
	}
}

GumballMachine::~GumballMachine(void)
{
}
