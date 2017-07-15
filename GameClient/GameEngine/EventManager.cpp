/********************************************************************
	created:	2017/07/09
	created:	9:7:2017   20:15
	filename: 	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine\EventManager.cpp
	file path:	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine
	file base:	EventManager
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "EventManager.h"

EventManager::EventManager(void)
{
	//
}

EventManager::~EventManager(void)
{
	//
}

void EventManager::EventConnect(const char* szEvent, EventDelegate delegate)
{
	EventDelegateMap::iterator it = m_EventDelegateMap.begin();
	if (it != m_EventDelegateMap.end())
	{
		return;
	}

	m_EventDelegateMap[szEvent] = delegate;

	return;
}

void EventManager::SendEvent(const char* szEvent)
{
	EventDelegateMap::iterator it = m_EventDelegateMap.begin();
	if (it == m_EventDelegateMap.end())
	{
		return;
	}

	VarList args;
	it->second(szEvent, args);

	return;
}

bool EventManager::SendCommand()
{
	//

	return true;
}
