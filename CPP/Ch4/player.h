#pragma once
#include "game.h"

struct Player
{
	// 플레이어의 좌표 데이터를 정의
	int posX;
	int posY;

	Player(int posX, int posY)
		:posX(posX), posY(posY)
	{}
	// 좌표를 기능적으로 함수로 구현해보세요.
	void ShowPlayerPos();
	void PlayerInputMove();
};