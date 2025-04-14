/*
* 목표 : cpp 게임 화면 구성하기
* 복습 : Windows.h GoToXY() 재구현
* 입출력 : cpp qkdtlrdmfh dlqcnffurgkrl
* 이론 : namespace 응용해보기
*/

/*
* 이름 공간을 사용할 때의 장점
* 1.다른 프로젝트 copy paste 합칠 때 발생하는 문제를 최소화 할 수 있다.
* 2. 이름공간에 쓰여진 이름을 통해서 코드를 분류할 수 있다.
*/

/*
* 목표 : 참조자를 사용해 플레이어의 움직임을 구현
*/
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <iomanip>

struct Item
{
	//std::string 이름의 크기를 자동으로 할당해준다.
	std::string name;   // 클래스
	int price;
};

namespace cutils
{
	

	//Item 구조체의 참조자를 바아와서 이름을 원하는 이름으로 변경, 가격을 원하는 가격으로 설정하는 함수 생성

	void MySetItem(Item& item,const std::string name,int price)
	{
		item.name = name;
		item.price = price;
	}

	void MySetItem(Item& setitem, const Item& copyitem)
	{
		setitem.name = copyitem.name;
		setitem.price = copyitem.price;
	}
	// default 매개 인자 : 함수 호출 시에 매개 변수를 부족하게 입력하면 자동으로 변수에 대입된다.
	// ShowShop
	

	void GoToXY(int x, int y)
	{
		COORD cord = { x, y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
	}

	void InputPlayerKey(int& x, int& y)
	{
		if (_kbhit())
		{
			if(GetAsyncKeyState(VK_LEFT))
			{
				x--;
				if (x < 0)
				{
					x = 0;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
				
			}
			if (GetAsyncKeyState(VK_UP))
			{
				y--;
				if (y < 0)
				{
					y = 0;
				}
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				y++;
			}
		}
	}
}

void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	cutils::GoToXY(x, y);
	std::cout << std::left << std::setw(20) << "아이템 이름" << "|" << std::setw(10) << "아이템 가격" << std::endl;
	for (int i = 0; i < length; i++)
	{
		cutils::GoToXY(x, y+1+i);
		std::cout << std::left << std::setw(20) << shop[i].name << "|" << std::setw(10) << shop[i].price << "|" << std::endl;
	}
}

// shop배열, 선택할 인덱스, Item 배열(인벤토리)
// copyItem
// 상점(Item 배열)에 있는 데이터를 복사해서, 유저의 아이템 배열에 가져온다. 배열의 데이터를 변경한다.

Item& GetItem(Item shop[], int length, int index)
{
	if (index > length)
	{
		std::cout << "등록되지 않은 아이템을 선택하여 0번째 아이템이 반환됩니다." << std::endl;

		return shop[0];;
	}

	return shop[index];
}
void AddInvenItem(Item inven[], int length, int index ,const Item& buyItem)
{
	inven[index].name = buyItem.name;
	inven[index].price = buyItem.price;
}

int main()
{
	// 예제 1. 10,10 좌표에 플레이어의 정보 텍스트를 출력해보자



	//예제 2. 플레이어의 이름을 입력 받아서 플레이어의 정보 텍스트 한줄 아래에 출력
	//입력 값을 정수로 받아서, 1을 받으면 플레이어 이름 추가하기
	//2를 받으면 화면에 플레이어 정보를 출력하기
	Item item1;
	Item item2;
	Item item3;

	
	cutils::MySetItem(item1, "아무거나", 1000);
	cutils::MySetItem(item2, "넣어도",300);
	cutils::MySetItem(item3, "몰라잉", 500);


	Item shop[3] = {item1,item2,item3};
	Item inven[3];

	
	ShowShop(shop, 3,0,0);
	std::cout << "구매하고 싶은 아이템 번호 입력" << std::endl;
	int input;
	std::cin >> input;

	AddInvenItem(inven,3,0,GetItem(shop, 3, input - 1));

	std::cout << "인벤토리의 아이템 확인" << std::endl;
	std::cout << inven[0].name << "," << inven[0].price << std::endl;
	//std::cout << "등록된 아이템 - 이름 : " << item1.name << " 가격 : " << item1.price << std::endl;
	//std::cout << "등록된 아이템 - 이름 : " << item2.name << " 가격 : " << item2.price << std::endl;
	_getch();


	char name[10] = " ";

	int x = 0, y = 0;
	while (true)
	{
		system("cls");
		//std::cout << "1_ 사용자의 이름을 변경할 수 있습니다. 2_ 플레이어의 정보를 화면에 출력합니다." << std::endl;
		int input = 0;
		//std::cin >> input;
		
		cutils::InputPlayerKey(x,y);
		cutils::GoToXY(x, y);
		std::cout << '$';
		if (input == 1)
		{
			system("cls");
			std::cout << "변경할 이름을 입력해 주십시오." << std::endl;
			std::cin >> name;
		}
		else if (input == 2)
		{
			cutils::GoToXY(10, 10);
			std::cout << "플레이어의 정보";
			cutils::GoToXY(10, 11);
			std::cout << "플레이어의 이름 : " << name;

		}
		else
		{

		}
		//_getch();
		Sleep(50);
		

	}
}