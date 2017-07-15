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

class Game : public Singleton<Game>
{
public:
	Game(void);
	~Game(void);

public:
	bool Init(){ return true; };
	bool Run(){ return true; };
	bool Shut(){ return true; };

	bool InitGame(HINSTANCE hInstance);
	bool RunGame();
	bool ShutGame();

private:
	bool OnUpdate();
};
