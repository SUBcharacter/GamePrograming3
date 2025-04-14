/*
* 작성일 : 25-04-14
* 작성자 : 이윤기	
* 주제 : 구조체와 참조자를 활용한 함수, 배열에서 데이터 참조
*/

/*
* x,y의 정수형 좌표를 함수의 매개 변수로 받아서 외부에서 값이 변경되도록 하는 
* 함수 void PlayerInput(int& x, int& y);
* 반환값 없는 함수. 이름이  PlayerInput(int& a, int& b); 호출할 수 있다.
* 타입 해석 : 정수형 데이터, 참조한 데이터를 수정할 수 있다.
*/

/*
* 함수의 선언
* 반환타입	함수이름(타입이름 매개변수,.....){본문}
* 
* 1. 반환타입 - 참조자로 사용되는 경우, 아닌 경우
* 2. 매개변수 - 참조자로 사용되는 경우, 아닌 경우
*/

/*
* 함수 오버로딩 (overloading)
* 플레이어의 x,y 좌표를 입력받아서 좌표를 변경시키는 함수
* 플레이어의 좌표 구조체를 입력받아서 좌표를 변경시키는 함수
* 같은 이름에 타입만 다르게 받으면 컴퓨터(컴파일러)가 구분할 수 있다.
*/

/*
* 함수 오버로딩.
* c++ 함수를 호출하는 방법
* 이름(타입 이름)
* 함수 오버로딩은 함수의 이름과 함수의 매개변수의 타입의 개수로 구분한다.
* 
* 주의 할 점
* - 반환형이 달라도 같은 함수로 판단한다.
* ex) void PlayerInput(), int PlayerInput() 오버로드 불가
*/

/*
* 참조자를 반환형에 사용하는 경우
* 
*/

int& ReturnRef()  // int& num1 = ReturnRef(); num공간 숫자20을 넣고 5를 더한다. num별명을 num1로 하겠다.
				  // num공간 숫자20을 넣고 5를 더한다. num별명을 num1로 하겠다.
				  // num지역 변수 함수가 종료되면 소멸한다.
				  // 댕글링 레퍼런스.
{
	int num = 20;
	num += 5;
	return num;
}

// 구조체 배열
// 아이템, 상점, 인벤토리
// 방해요소의 크기
// 슬라임의 종류, 크기마다 종류가 다른
// 참조자 이 개념에 대입해본다.

struct Cord {
	int x;
	int y;
};

void PlayerInput(Cord& cord)
{
	cord.x += 1;
	cord.y += 1;
}

void PlayerInput(int& x, int& y)
{
	x += 1;
	y += 1;
}

#include <iostream>

int main()
{
	std::cout << "Ch3 구조체와 참조자" << std::endl;

	int a = 0;
	int b=0;


	PlayerInput(a, b);
	std::cout << "출력결과 : (" << a << ", " << b << ")" << std::endl;

	Cord pos = { a, b };
	PlayerInput(pos);
	std::cout << "출력결과 : (" << pos.x << ", " << pos.y << ")" << std::endl;

}