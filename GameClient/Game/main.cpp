/********************************************************************
	created:	2016/11/08
	created:	8:11:2016   23:17
	filename: 	c:\Users\worldend\Desktop\Game\Game\main.cpp
	file path:	c:\Users\worldend\Desktop\Game\Game
	file base:	main
	file ext:	cpp
	author:		
	
	purpose:	
*********************************************************************/
#include <Windows.h>
#include "macro_util.h"
#include "Game.h"

int WINAPI WinMain( __in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in_opt LPSTR lpCmdLine, __in int nShowCmd )
{
	//��ʼ����Ϸ
	Game::GetSingleton()->InitGame(hInstance);

	//������Ϸ
	Game::GetSingleton()->RunGame();

	//�ر���Ϸ
	Game::GetSingleton()->ShutGame(hInstance);

	return 0;
}