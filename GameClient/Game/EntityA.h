#pragma once

class EntityA
{
public:
	EntityA(void);
	~EntityA(void);

public:
	void Func()
	{
		EventManager::GetSingleton()->SendEvent("on_test");
	};
};
