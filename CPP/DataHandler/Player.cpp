#include "Player.h"

void Player::Upgrade(UpgradeType type, int amount)
{
	switch (type)
	{
	case STR: str += amount;
		break;
	case DEX: dex += amount;
		break;
	case INT: intel += amount;
		break;
	case LUK: luk += amount;
		break;
	case NONE: return;
		break;
	}
	
}

void Player::Upgrade(Item& item)
{
	Upgrade(item.type.type, item.type.amount);
}

void Player::ShowPlayerInfo()
{
	cout << "STR : " << str << endl;
	cout << "DEX : " << dex << endl;
	cout << "INT : " << intel << endl;
	cout << "LUK : " << luk << endl;
}
