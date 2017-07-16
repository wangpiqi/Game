#pragma once

struct WindowsStruct
{
	HWND hWnd;
	bool bFullScreen;
	int nWidth;
	int nHeight;

	WindowsStruct() :
	bFullScreen(false), nWidth(800), nHeight(600){ }
};