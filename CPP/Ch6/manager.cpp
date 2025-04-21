#include "manager.h"

void Example1()
{
	// 콘솔 창에서 실행하기 때문에 좌표가 음수가 되면 안된다.
	// 사람은 실수를 할 수 있지만, 실수를 찾기 위한 구조적인 설계가 되어 있지 않다.

	cPoint cp1(6, 5);
	cPoint cp2(4, 9);

	Point Point(4, 6);

	Rectangle rect(cp1, cp2);

	rect.Draw();

}

void Example2()
{

}

void Example3()
{

}

int cPoint::GetX() const
{
	return x;
}

int cPoint::GetY() const
{
	return y;
}

void cPoint::SetX(int amount)
{
	if (amount < 0)
	{
		cout << "변경불가" << endl;
		return;
	}
	x = amount;
}

void cPoint::SetY(int amount)
{
	if (amount < 0)
	{
		cout << "변경불가" << endl;
		return;
	}
	y = amount;
}

bool Rectangle::LorR(cPoint p1, cPoint p2)
{
	if (p1.GetX() < p2.GetX())
	{
		return true;
	}
	else
	{
		return false;
	}
		
}

bool Rectangle::UorD(cPoint p1, cPoint p2)
{
	if (p1.GetY() > p2.GetY())
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void Rectangle::Draw()
{
	cout << "왼쪽 위 점 : (" << leftUpPoint.GetX() << ", " << leftUpPoint.GetY() << ")" << endl;
	cout << "오른쪽 아래 점 : (" << rightDownPoint.GetX() << ", " << rightDownPoint.GetY() << ")" << endl;
}
