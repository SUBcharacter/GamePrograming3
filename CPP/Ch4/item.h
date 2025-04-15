#pragma once
#include "game.h"

enum ItemType
{
	ARMOR,
	WEAPON,
	USEABLE
};

struct Item
{
	std::string name;
	int price;
	int count;
	ItemType type;

	// 생성자 - 구조체의 이름과 동일해야 한다 + ()
	// 멤버 이니셜라이즈
	Item(std::string name, int price, int count, ItemType type)
		: name(name), price(price), count(count), type(type)
	{}

	void ShowItemInfo();
	std::string ReturnByTypeName();
	
};