#pragma once
#include "common.h"
#include <random>
#include <Windows.h>

class RandomUtil
{
public:
	static int GetRandomInt(int range);

};

class ConsoleUtil
{
public:
	static void GoToXY(int x, int y);
};