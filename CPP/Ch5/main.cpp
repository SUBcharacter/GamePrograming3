/*
* 작성일 : 25-04-16
* 작성자 : 이윤기
* 주제 : 데이터 복사 , 얕은 복사, 깊은 복사
*/

/*
* 예제 문제.
* person.h
* 성별 추가
* enum 사용;
* 
*/

#include "common.h"
#include "person.h"

void Example()
{
	int num1 = 10;
	// num2, num1에 저장되어 있는 값을 2에 옮기고 싶다.
	// num1의 값을 num2에 복사 하고 싶다.
	int num2 = num1;
	// 정수의 주소를 저장하는 변수를 2개 선언
	int* num1ptr = &num1;
	int* num2ptr = num1ptr;

	// num2ptr에 들어간 주소와 num1ptr들어간 주소, num1의 주소는 같나?

	cout << "num1의 주소" << &num1 << endl;
	cout << "num1ptr의 값" << num1ptr << endl;
	cout << "num2ptr의 값" << num2ptr << endl;

	// 변수 끼리 대입연산자 사용한 경우
	// num1, num2는 각각 다른 공간에 존재한다.
	// 주소 끼리 대입연산자 사용한 경우
	// 주소가 가리키는 값이 같다.

	// num1, num1ptr, num2ptr 주소의 값이 모두 동일하다.
	// 해당 주소를 하나의 변수에서 제거하면 다른 변수에서 접근을 할 수 없게 된다.

}

int main()
{
	cout << "Ch5 : 데이터 복사" << endl;

	//Example();

	//Person human1 = { "존프라이스",40};
	Person human1(40,"price",MALE);
	Person clone;
	Person human2(36, "soap", MALE);
	Person human3(34, "laswel", FEMALE);
	clone.Clone(human1);
	human1.Show();
	clone.Show();
	human2.Show();
	human3.Show(); 

}