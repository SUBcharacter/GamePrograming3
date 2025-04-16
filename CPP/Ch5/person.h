#pragma once
#include "common.h"

// 이름이  person 구조체, 나이, 이름

/*
* c와 cpp의 차이점 3. 메모리 동적 할당;
* 
* malloc(memory allocate) : malloc(크기 sizeof(char)*10);
* free(변수 이름);
* 
* new		: cpp 동적 할당 하는 키워드
  delete	: 메모리 해제 키워드
*/

/*
* 생성자 : 객체가 데이터를 생성을 할 때 초기화 해주는 방법
* 소멸자 : 객체가 소멸할 때 자동으로 호출되는 기능
*/

/*
* age, name;    age = 20; name = "모험가"
* age = 외부에서 가져온 숫자를 넣음; age(age)
* 주소 = 주소;
*/

enum Sex
{
	MALE, FEMALE
};

struct Person
{
	int age;
	char* name;		// 길이 불명 , 메모리 배정 안됨
	string sname;
	Sex sex;
	// 디폴트 생성자
	Person(){}

	// 가장 간단한 문자열 초기화 방식
	Person(int age, const string sname,Sex sex) : age(age), sname(sname),sex(sex) {}

	// 생성자 오버로딩
	Person(int age, const char* str)
		:age(age) 
	{
		// 메모리 공간을 직접 생성해줘야 한다.
		// 새로 생성한 공간에 외부에 있는 데이터를 복사해서 옮겨와야 한다.
		name = new char[strlen(str) + 1];
		strcpy(name, str);
	}
	// 소멸자 : 객체가 소멸될 때 자동으로 호출된다.
	~Person()
	{
		cout << "Person의 소멸자가 호출되었습니다." << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const; // 객체 안의 데이터를 변경없이 사용하겠다. 사용자에게 알려준다.
};