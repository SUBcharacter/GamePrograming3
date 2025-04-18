#pragma once
#include "common.h"
#include "Image.h"



struct Player
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	int posX;
	int posY;
	bool isDeath;

	Player(int HP, int ATK, int DEF, string name, char image[IMAGEHEIGHT][IMAGEWIDTH + 1], BattleState battleState)
		: HP(HP), ATK(ATK), DEF(DEF), name(name), battleState(battleState)
	{
		
		posX = 0;
		posY = 5;
		isDeath = false;

		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->image[y][x] = image[y][x];
			}
		}
	}

	void ShowImage();

	void ChangeImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	// 조건에 해당하는 기능
	bool IsBattle();
	bool IsMoving();
	bool IsIdle();

	void SetBattleImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	void Attacked(int damage);
	void Defence();
	void UseItem(int heal);
};