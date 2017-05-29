/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:23
	filename: 	c:\Users\worldend\Desktop\Game\Game\Game.cpp
	file path:	c:\Users\worldend\Desktop\Game\Game
	file base:	Game
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "Game.h"
#include "GameEngine.h"
#include "macro_util.h"
#include "Test.h"

Game::Game(void)
{
	return;
}

Game::~Game(void)
{
	return;
}

bool Game::InitGame(HWND hWnd, bool bFullScreen)
{
	GameEngine::GetSingleton()->InitGameEngine(hWnd, bFullScreen);

#ifdef _DEBUG
	Test::TestXXX();
#endif

	return true;
}

bool Game::RunGame()
{
	GameEngine::GetSingleton()->RunGameEngine();
	return true;
}

bool Game::ShutGame()
{
	GameEngine::GetSingleton()->ShutGameEngine();
	return true;
}
