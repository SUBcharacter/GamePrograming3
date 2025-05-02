#pragma once
#include "common.h"
#include "DataHandler.h"


class Player
{
	int str;
	int dex;
	int intel;
	int luk;
public:
	Player() : str(0), dex(0), intel(0), luk(0) {}

	void Upgrade(UpgradeType type, int amount);
	void Upgrade(Item& item);

	void ShowPlayerInfo();
};

