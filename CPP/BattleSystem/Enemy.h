#pragma once
#include "common.h"
#include "Image.h"


struct Enemy
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char image[IMAGEHEIGHT][IMAGEWIDTH+1];

	Enemy(int HP,int ATK,int DEF,string name, char image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP),ATK(ATK),DEF(DEF),name(name)
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH+1; x++)
			{
				this->image[y][x] = image[y][x];
			}
		}
	}

	void ShowImage(int& posX, int& posY);

	void ChangeImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	// 조건에 해당하는 기능
	bool IsBattle(int x, int y);
	bool IsMoving(int x, int y);
	bool IsIdle(int x, int y);

	void SetBattleImage(char image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};