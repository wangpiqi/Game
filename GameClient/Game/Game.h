/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:23
	filename: 	c:\Users\worldend\Desktop\Game\Game\Game.h
	file path:	c:\Users\worldend\Desktop\Game\Game
	file base:	Game
	file ext:	h
	author:		
	
	purpose:	
*********************************************************************/
#pragma once

#include "Singleton.h"
#include <Windows.h>
#include "GameEngine_Define.h"

class Game : public Singleton<Game>
{
public:
	Game(void);
	~Game(void);

public:
	bool InitGame(HINSTANCE hInstance);
	bool RunGame();
	bool ShutGame(HINSTANCE hInstance);

private:
	bool OnUpdate();
	bool CreateConsole();
};
