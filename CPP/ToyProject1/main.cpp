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

namespace cutils
{
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

int main()
{
	// 예제 1. 10,10 좌표에 플레이어의 정보 텍스트를 출력해보자



	//예제 2. 플레이어의 이름을 입력 받아서 플레이어의 정보 텍스트 한줄 아래에 출력
	//입력 값을 정수로 받아서, 1을 받으면 플레이어 이름 추가하기
	//2를 받으면 화면에 플레이어 정보를 출력하기

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