/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:23
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\GameEngine.h
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	GameEngine
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "..\Public\Singleton.h"
#include <Windows.h>
#include "GameEngine_Define.h"

class GameEngine : public Singleton<GameEngine>
{
public:
	GameEngine(void);
	~GameEngine(void);

public:
	bool Init(){ return true; };
	bool Run(){ return true; };
	bool Shut(){ return true; };

	bool InitGameEngine(const WindowsStruct& stWindows);
	bool RunGameEngine();
	bool ShutGameEngine();

	bool InitManager();
	bool RunManager();
	bool ShutManager();
};
