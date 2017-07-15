#pragma once

#include "EventManager.h"

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
