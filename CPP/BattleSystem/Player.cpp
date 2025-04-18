#include "Player.h"

void Player::ShowImage()
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			//특정 좌표 이동
			GoToXY(posX + x, posY + y);

			cout << image[y][x];
		}
		cout << endl;
	}
}

void Player::ChangeImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->image[y][x] = image[y][x];
		}
	}
}

bool Player::IsBattle()
{
	if (posX >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::SetBattleImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(image);

	//이동 로직
	if (IsBattle())
		posX = 5;
	else
		posX++;

	ShowImage();
}

void Player::Attacked(int damage)
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
}

void Player::Defence()
{
	DEF += 3;
}

void Player::UseItem(int heal)
{
	HP += heal;

	//최대 체력


}
