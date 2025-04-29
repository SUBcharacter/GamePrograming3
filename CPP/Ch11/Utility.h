#pragma once
#include "common.h"
#include <random>
#include <Windows.h>
#include <tchar.h>

class RandomUtil
{
public:
	static int GetRandomInt(int range);

};

class ConsoleUtil
{
public:
	static void GoToXY(int x, int y);
	static void PlayBGM(LPCWSTR filename);
	static void PlayGameBGM(LPCWSTR filename);
};

