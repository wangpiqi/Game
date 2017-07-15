#pragma once

#include "Event\EventManager.h"
#include "macro_util.h"

class EntityA
{
public:
	EntityA(void);
	~EntityA(void);

public:
	void Func()
	{
		SEND_EVENT("on_test");
	};
};
