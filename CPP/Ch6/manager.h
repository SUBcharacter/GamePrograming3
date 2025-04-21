#pragma once
#include <iostream>
#include <stdexcept>

// 객체 지향 프로그래밍 - OOP(Object Oriented Programming)

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 예제 1 - 좌표 구현 구조체 Pos, 정보 은닉
// 목표. 콘솔 화면 창에 사각형을 그리는 객체를 만들어보세요.

// 목표 : 사각형, 점, 콘솔
// 키워드 : 접근 제어 지시자, 

// struct 기본 설계가 public
// class private 되어 있다.

class Point
{
public:
	int x;
	int y;
public:
	Point(int x, int y) : x(x), y(y) {}
};

// 접근 제어 지시자
// private, public, protected

// private : 객체 내부에서만 접근 허용
// public :  객체 외부에서도 접근 허용
// protected : 

// class 키워드 기본적으로 private 구현.

// 정보 은닉 : 외부에서 사용하지 못하게 막는 것
// 왜 외부에서 사용하면 안되는데?
// 안전하게 구현된 코드에서만 외부로 노출되도록 만든다.


class cPoint
{
private :
	int x;
	int y;
public:
	cPoint() {}
	cPoint(int outx, int outy)
	{
		if (x < 0 || y < 0)
		{
			cout << "유효하지 않은 범위" << endl;
			return;
		}
		x = outx;
		y = outy;
	}

	int GetX() const;
	int GetY() const;
	void SetX(int amount);
	void SetY(int amount);

	
};

class Rectangle
{
public:
	cPoint leftUpPoint;
	cPoint rightDownPoint;

public:
	bool LorR(cPoint p1, cPoint p2);
	bool UorD(cPoint p1, cPoint p2);
	Rectangle(cPoint p1, cPoint p2)
	{
		if (LorR(p1,p2))
		{
			leftUpPoint.SetX(p1.GetX()) ;
			rightDownPoint.SetX(p2.GetX());
		}
		else
		{
			leftUpPoint.SetX(p2.GetX());
			rightDownPoint.SetX(p1.GetX());
		}
			

		if (UorD(p1,p2))
		{
			leftUpPoint.SetY(p1.GetY());
			rightDownPoint.SetY(p2.GetY());
		}
		else
		{
			leftUpPoint.SetY(p1.GetY());
			rightDownPoint.SetY(p2.GetY());
		}
	}

	void Draw();
};

void Example1();

// 예제 2
void Example2();

// 예제 3
void Example3();