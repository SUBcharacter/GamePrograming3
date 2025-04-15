/*
* 1. namespace 사용법 및 주의사항
* 2. cpp 구조체의 변경사항 (객체를 표현하는 문법이 추가되었다)
* 3. class 키워드
*/

#include <iostream>
#include <Windows.h>
#include <conio.h>

#include "item.h"
#include "player.h"

// std::cout, std::cin, std::endl
// 표준 라이브러리 std

//using namespace std;   // 해당 소스파일 내부의 모든 코드를 namespace std안에 있는것으로 판단한다
// std::cout 

// 주의점
// std안에 있던 이름과 같은 타입의 데이터를 생성하면 모호하다는 에러 발생

// 권장사용 방법

using std::cout;
using std::endl;
using std::cin;

void NameSpaceEx()
{
	int num = 0;

	cin >> num;
	cout << "num의 값 : " << num << endl;
}

int main()
{
	cout << "ch4: 객체 지향 프로그래밍" << endl;
	
	Item item1 = { "리볼버",100,1, WEAPON };
	item1.ShowItemInfo();

	Item item2("방탄조끼", 300, 1, ARMOR);
	item2.ShowItemInfo();

	_getch();
	// 타입 item1 이름 ={이름, 가격, 수, 타입}

	
	Player p1(0, 0);
	while (1)
	{
		system("cls");
		p1.PlayerInputMove();
		p1.ShowPlayerPos();

		Sleep(75);
	}
	
}