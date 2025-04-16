#include "person.h"

/*
* 얕은 복사 : 데이터의 값을 그대로 다른 변수에 가져오는 것. 크기가 작을 때 사용.
* 깊은 복사 : 주소를 새로 할당해서 값을 복사해서 저장하는 것. 새 메모리 공간이 할당.
*/

void Person::Clone(const Person& other)
{
	// 얕은 복사 -> 깊은 복사 변경해줘야 된다.
	age = other.age; // 얕은 복사
	sex = other.sex;
	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
}

void Person::Show() const
{
	cout << "이름 : " << sname << endl;
	cout << "나이 : " << age << endl;
	cout << "성별 : " << sex << endl;
	
}
