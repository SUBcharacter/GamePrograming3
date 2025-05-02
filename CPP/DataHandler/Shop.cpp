#include "Shop.h"

bool Shop::LoadItems(const string& filename)
{
	count = loader.LoadItems("data.txt", items);

	return count > 0; // 아이템을 1개라도 가져오면 LoadItem "True" // "False"
}

void Shop::ShowItems()
{
	cout << "판매하는 아이템" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "G" << "\t타입 : " << items[i].type.type << "\t수치 : " << items[i].type.amount << endl;
	}
}
