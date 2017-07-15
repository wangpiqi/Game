/********************************************************************
	created:	2017/07/09
	created:	9:7:2017   20:15
	filename: 	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine\EventManager.h
	file path:	d:\Users\worldend\Desktop\Game GitHub\GameClient\GameEngine
	file base:	EventManager
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include <map>
#include "Event_Define.h"
#include "Singleton.h"

class EventManager : public Singleton<EventManager>
{
public:
	EventManager(void);
	~EventManager(void);

public:
	void EventConnect(const char* szEvent, EventDelegate delegate);
	void SendEvent(const char* szEvent);

	bool SendCommand();

private:
	EventDelegateMap m_EventDelegateMap;
};
