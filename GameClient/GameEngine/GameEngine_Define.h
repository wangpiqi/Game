#pragma once

struct WindowsStruct
{
	HWND hWnd;
	bool bFullScreen;

	WindowsStruct() :
	bFullScreen(false){ }
};