#pragma once
#include <Windows.h>


class Console
{
public:
	static void GoToXY(int x, int y)
	{
		COORD pos = { static_cast<short>(x), static_cast<short>(y) };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	static void CursorVisible(bool show)		// 콘솔 커서를 보여주려면 ture, false
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cursorinfo;
		GetConsoleCursorInfo(hConsole, &cursorinfo);
		cursorinfo.bVisible = show;
		SetConsoleCursorInfo(hConsole, &cursorinfo);
	}
};

