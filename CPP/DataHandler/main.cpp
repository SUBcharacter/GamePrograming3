/*
* 목표 : 메모장에 있는 게임 데이터를 코드로 읽는 방법을 구현한다.
*/

#include "common.h"
#include "GameManager.h"

int main()
{
	Shop shop;
	Shop shop2;
	Player player;

	/*DataHandler loader;

	Item items[MAX_ITEMS];

	int count = loader.LoadItems("data.txt", items);*/
	shop2.LoadItems("data.txt");

	shop.ShowItems();
	shop2.ShowItems();
	player.Upgrade(shop.GetItems(3));
	player.ShowPlayerInfo();
}