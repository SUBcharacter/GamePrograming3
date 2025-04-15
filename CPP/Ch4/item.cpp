#include "item.h"

/*
* 반환형 객체이름::함수이름()  // 객체에 들어있는 함수를 정의하는 방법
* 
*/

void Item::ShowItemInfo()
{
	cout << "아이템 이름 : " << name << "  아이템 타입 : " << ReturnByTypeName() << "  가격 : " << price << "   아이템 개수 : " << count << endl;
}

std::string Item::ReturnByTypeName()
{
	{
		switch (type)
		{
		case ARMOR: return "방어구";
		case WEAPON: return "무기";
		case USEABLE: return "소모품";
		}
	}
}
