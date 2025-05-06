#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "common.h"
#include <string>
#include "Console.h"
class Image
{
private:
	char art[100][100];
	int height;
public:
	Image(const char* model, int height)
	{
		this->height = height;
		const char* lineStart = model;
		for (int i = 0;i < height;i++)
		{
			const char* lineEnd = strchr(lineStart, '\n');
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model);
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}
	void Show(int x, int y) const
	{
		for (int i = 0;i < height;i++)
		{
			Console::GoToXY(x, y + i);
			cout << art[i];
		}
	}

	void move(int x, int y, int moveDistance, int delay)
	{
		for (int i = 0; i < moveDistance;i++)
		{
			system("cls");
			Console::GoToXY(x + i, y);
			for (int j = 0;j < height;j++)
			{
				Console::GoToXY(x + i, y + j);
				cout << art[j];
			}
			Sleep(delay);
			
		}
	}

	void moveReverse(int x, int y, int moveDistance,int delay)
	{
		for (int i = 0; i < moveDistance;i++)
		{
			system("cls");
			int currentX = x - i;
			if (currentX <= 0)
			{
				currentX = 0;
			}
			Console::GoToXY(currentX, y);
			for (int j = 0;j < height;j++)
			{
				Console::GoToXY(currentX , y + j);
				cout << art[j];
			}
			Sleep(delay);
			
		}
	}
};

