/********************************************************************
	created:	2016/11/09
	created:	9:11:2016   20:23
	filename: 	c:\Users\worldend\Desktop\Game\GameEngine\GameEngine.cpp
	file path:	c:\Users\worldend\Desktop\Game\GameEngine
	file base:	GameEngine
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include "GameEngine.h"
#include "..\Public\macro_util.h"
#include "RenderSystem\RenderSystem.h"

GameEngine::GameEngine(void)
{
}

GameEngine::~GameEngine(void)
{
}

bool GameEngine::InitGameEngine(const WindowsStruct& stWindows)
{
	RenderSystem::GetSingleton()->InitRenderSystem(stWindows);
	return true;
}

bool GameEngine::RunGameEngine()
{
	RenderSystem::GetSingleton()->RunRenderSystem();
	return true;
}

bool GameEngine::ShutGameEngine()
{
	RenderSystem::GetSingleton()->ShutRenderSystem();
	return true;
}

bool GameEngine::InitManager()
{
	return true;
}

bool GameEngine::RunManager()
{
	return true;
}

bool GameEngine::ShutManager()
{
	return true;
}

