#include "Enemy.h"

void Enemy::ShowImage()
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

bool Enemy::IsBattle()
{
	if (posX <= 14)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void Enemy::SetBattleImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(image);

	//이동 로직
	if (IsBattle())
		posX = 14;
	else
		posX--;

	ShowImage();
}

void Enemy::Attacked(int damage)
{
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	HP -= damage;

	if (HP <= 0)
	{
		isDeath = true;
	}
	// HP가 0보다 작거나 같으면 몬스터가 죽었다는 사실을 알려야 함. - Bool isDeath
}
