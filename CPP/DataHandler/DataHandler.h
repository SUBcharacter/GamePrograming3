#pragma once
#include "common.h"

// 가져올 데이터의 타입을 하나의 이름 가져오기 위해서 구현
const int MAX_ITEMS = 100;

enum UpgradeType
{
	STR, DEX, INT, LUK, NONE
};

struct ItemDataType
{
	UpgradeType type;
	int amount;

	ItemDataType()
	{
		type = UpgradeType::NONE;
		amount = 0;
	}

	ItemDataType(int typeCount, int amount) : amount(amount)
	{
		if (typeCount == 0)
		{
			type = UpgradeType::STR;
		}
		else if (typeCount == 1)
		{
			type = UpgradeType::DEX;
		}
		else if (typeCount == 2)
		{
			type = UpgradeType::INT;
		}
		else if (typeCount == 3)
		{
			type = UpgradeType::LUK;
		}
		else
		{
			type = UpgradeType::NONE;
		}
	}
};

class Item
{
public:
	int index;
	string name;
	int price;
	ItemDataType type;

public:
	Item() : index(0), name(""), price(0), type(ItemDataType()) {}
	Item(int idx, string name, int prc, ItemDataType dataType) : index(idx), name(name), price(prc), type(dataType) {}
};

// 

class DataHandler
{
public:
	// filename 메모장 열기, items(메모장의 정보를 저장할 매개체)
	int LoadItems(const string& filename, Item items[]);
};

