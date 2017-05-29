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

int WINAPI WinMain( __in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in_opt LPSTR lpCmdLine, __in int nShowCmd )
{
	//���崰����
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

	//ע�ᴰ����
	RegisterClass(&cls);

	//��������
	HWND hWnd = CreateWindow(CLASS_NAME, WINDOW_NAME, WS_OVERLAPPEDWINDOW
		, WINDOW_LEFT, WINDOW_TOP, WINDOW_WIDTH, WINDOW_HEIGHT, NULL, NULL, hInstance, 0);

	//��ʼ����Ϸ
	Game::GetSingleton()->InitGame(hWnd, FULL_SCREEN);

	//��ʾ���´���
	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	//��Ϣѭ��
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
			//������Ϸ
			Game::GetSingleton()->RunGame();
		}
	}

	//�ر���Ϸ
	Game::GetSingleton()->ShutGame();

	UnregisterClass(CLASS_NAME, hInstance);

	return 0;
}