#include "player.h"

void Player::ShowPlayerPos()
{
	cout << "플레이어 위치 : (" << posX << ", " << posY << ")";
}

void Player::PlayerInputMove()
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_UP))
		{
			posY--;
			if (posY < 0)
			{
				posY = 0;
			}
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			posY++;

		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			posX--;
			if (posX < 0)
			{
				posX = 0;
			}
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			posX++;
		}
	}
}
