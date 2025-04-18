#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#define IMAGEHEIGHT 10
#define IMAGEWIDTH 10

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum TurnSystem
{
	PLAYERTURN,
	ENEMYTURN,
	GAMECLEAR,
	GAMEEND
};

enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

void GoToXY(int x, int y);