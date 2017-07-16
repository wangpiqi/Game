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
#include <stdio.h>
#include <io.h>
#include <fcntl.h>

LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
	switch (msg)
	{
	case WM_DESTROY:
		{
			PostQuitMessage(0);
			return 0;
		}
		break;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}

Game::Game(void)
{
	return;
}

Game::~Game(void)
{
	return;
}

bool Game::InitGame(HINSTANCE hInstance)
{
#ifdef _DEBUG
	CreateConsole();
#endif

	//定义窗口类
	WNDCLASS cls;
	cls.cbClsExtra = 0;
	cls.cbWndExtra = 0;
	cls.hbrBackground = NULL;
	cls.hCursor = NULL;
	cls.hIcon = NULL;
	cls.hInstance = hInstance;
	cls.lpfnWndProc = MsgProc;
	cls.lpszClassName = CLASS_NAME;
	cls.lpszMenuName = NULL;
	cls.style = 0;

	//注册窗口类
	RegisterClass(&cls);

	//创建窗口
	HWND hWnd = CreateWindow(CLASS_NAME, WINDOW_NAME, WS_OVERLAPPEDWINDOW
		, WINDOW_LEFT, WINDOW_TOP, WINDOW_WIDTH, WINDOW_HEIGHT, NULL, NULL, hInstance, 0);

	//显示更新窗口
	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	WindowsStruct st;
	st.hWnd = hWnd;
	st.bFullScreen = FULL_SCREEN;
	st.nWidth = WINDOW_WIDTH;
	st.nHeight = WINDOW_HEIGHT;
	GameEngine::GetSingleton()->InitGameEngine(st);

#ifdef _DEBUG
	Test test;
	test.TestXXX();
#endif

	return true;
}

bool Game::RunGame()
{
	//消息循环
	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));

	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else
		{
			OnUpdate();
		}
	}

	return true;
}

bool Game::ShutGame(HINSTANCE hInstance)
{
	GameEngine::GetSingleton()->ShutGameEngine();

	UnregisterClass(CLASS_NAME, hInstance);

	return true;
}

bool Game::OnUpdate()
{
	GameEngine::GetSingleton()->RunGameEngine();
	return true;
}

bool Game::CreateConsole()
{
	FreeConsole();

	if (AllocConsole())
	{
		int hCrt = _open_osfhandle((long)GetStdHandle(STD_OUTPUT_HANDLE), _O_TEXT);
		*stdout = *(::_fdopen(hCrt, "w"));
		::setvbuf(stdout, NULL, _IONBF, 0);
		*stderr = *(::_fdopen(hCrt, "w"));
		::setvbuf(stderr, NULL, _IONBF, 0);

		return true;
	}

	return false;
}
