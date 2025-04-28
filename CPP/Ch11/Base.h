#pragma once
#include "common.h"

// 기본 클래스 - 파생 클래스

// 1. 접근 지정자 레이블 선언
// private : 자신 클래스에서만 사용 가능
// protected : 자식 클래스 까지 사용가능
// public : 모든 범위 사용가능

// 2. 생성자 : 멤버 변수를 클래스 생성과 동시에 초기화 하는 문법
//	  소멸자 : 클래스가 소멸될 때 자동으로 호출되는 함수

// 3. 메모리 누수, 동적 할당 무엇이 문제가 되는가?
// 프로그램, 앱 오랜 기간 접속, 플레이 중에 문제가 종종 발생한다. (화면 버벅임, 강제 종료) 메모리 누수.
// 동적 할당 주소, 사용을 안할때 메모리 해제.
// 앱 -> (헬스, 뉴스, .....) -> 동적 할당 -> 종료 -> 재실행 -> 다시 동적 할당
// 소멸자, 스마트 포인터

class Base
{
private:
	int count;
protected:

public:
	Base() : count(0) {}
	Base(int count) : count(count) 
	{
		cout << "생성자 호출" << endl;
	}
	virtual ~Base() // 가상 소멸자
	{
		cout << "Base 클래스가 소멸되었음" << endl;
	}

	virtual void Do();
};

class Derived : public Base
{
	
public:
	void Do() override;

	~Derived() override
	{
		cout << "Derived 클래스가 소멸되었음" << endl;
	}
};