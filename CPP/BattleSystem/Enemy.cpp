#include "Enemy.h"

void Enemy::ShowImage(int& posX, int& posY)
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			//특정 좌표 이동
			GoToXY(posX+x, posY+y);

			cout << image[y][x];
		}
		cout << endl;
	}
}

void Enemy::ChangeImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->image[y][x] = image[y][x];
		}
	}
}

bool Enemy::IsBattle(int x, int y)
{
	if (x <= 10)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void Enemy::SetBattleImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY)
{
	ChangeImage(image);

	//이동 로직
	if (posX < 10)
		posX = 10;
	else
		posX--;

	ShowImage(posX, posY);
}
