#pragma once

#include "Light.h"
#include "Singleton.h"

typedef std::hash_map<std::string, Light*> LightMap;

class LightManager : public Singleton<LightManager>
{
public:
	LightManager(void);
	~LightManager(void);

public:
	CREATE_CLASS(Light);

private:
	LightMap m_LightMap;
};
