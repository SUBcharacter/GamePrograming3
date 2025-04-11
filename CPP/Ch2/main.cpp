/*
* 작성일 : 25-04-10
* 작성자 : 이윤기
* 주제 : 
*/

#include <iostream>

/*
* 참조자 이해를 위한 함수 구현 Swap함수 구현하기
*/

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
// 함수 오버로딩. 함수의 이름이 같아도 매개 변수의 타입이 다르면 구분할 수 있다.
void SwapByRef(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// 문제1. SwapPointer함수를 만든다. 주소를 참조자로 변경하는 함수를 만든다.
// 변수만 참조자로 만들수 있는가? 아님. 주소, 배열 원소 참조자로 만들 수 있다.
// int arr[3] = { 1,2,3 }
//int 

void SwapPointer(int* &a, int* &b)
{
	int* temp = a;
	a = b;
	b = temp;
}

int main()
{
	// namespace std로 정의 되어있는 공간 안에 cout 가져와서 사용
	std::cout << "2강_ 참조자\n" << std::endl;

	// 참조자 선언과 사용이 구분된다.
	// 함수도 선언과 사용이 구분된다.

	int num1;
	num1 = 1;

	int* num1ptr = &num1;
	int& num1ref = num1;

	num1ref += 1;
	
	std::cout << "num1의 값 : " << num1 << std::endl;
	std::cout << "num1의 값 num1ref 참조자로 호출 : " << num1ref << std::endl;
	

	// 참조자를 어디에 사용하나?

	int input = 0;
	// scanf("%d",&input);
	// 참조자 활용의 장점 : c++ 참조자를 사용해서 함수를 사용할때 *, & 기호를 사용하지 않고 표현할 수 있다.
	
	// SwapByValue Ref에 대한 예제
	std::cout << "Call by Value와 Call by Reference 예제" << std::endl;

	int value1 = 10, value2 = 20; // Value, Value2 변경되어서 출력하게 만들기, 함수를 이용해서

	std::cout << "Call by Value" << std::endl;

	std::cout << "value1 : " << value1 << "value : " << value2 << std::endl;
	SwapByValue(value1, value2);
	std::cout << "value1 : " << value1 << "value : " << value2 << std::endl;

	std::cout << "Call by Reference" << std::endl;

	std::cout << "value1 : " << value1 << "value : " << value2 << std::endl;
	SwapByRef(&value1, &value2);
	std::cout << "value1 : " << value1 << "value : " << value2 << std::endl;
	
	std::cout << "Call by Value" << std::endl;

	std::cout << "value1 : " << value1 << "value : " << value2 << std::endl;
	//SwapByValue(value1, value2);
	SwapByRef(value1, value2);
	std::cout << "value1 : " << value1 << "value : " << value2 << std::endl;


	std::cout << "참조자의 응용" << std::endl;

	int ssnum1 = 1;
	int ssnum2 = 100;
	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;

	std::cout << "ssnum1ptr로 부터 값 : " << ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr로 부터 값 : " << ssnum2ptr << std::endl;

	SwapPointer(ssnum1ptr, ssnum2ptr);

	std::cout << "ssnum1ptr로 부터 값 : " << ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr로 부터 값 : " << ssnum2ptr << std::endl;

	// 참조자를 사용하면 포인터에 사용된 기호를 생략할 수 있다.
	// int, int 끼리 바꿀때는 참조자르 사용한다.
	// int*, int* 끼리 바꿀때는 int*& int*&

	// 참조자 사용시 주의 해야할 사항

	// int& ref; dpfj1. 참조자는 선언할 때 반드시 초기화가 필요하다.

	int AAA = 10;
	int& AAAref = AAA;

	// const 활용하여서 함수를 사용하는 사람에게 가이드를 안내해줄 것

	// return 타입에 참조자를 선언할 때 주의해야 한다.

	// main 함수에서의 선언	|	 함수의 값 리턴(int func())		|	함수에서 참조자 리턴(int& func())
	// int a =func();		|	 a의 값이 복사됨					|	a에 값이 복사됨. func안에서 지역 변수를 return하지 않아야 함.
	// int& a =func();		|	 a는 func리턴 값을 별명으로 한다. |	func안에서 지역 변수를 return하지 않아야 함.
	//							 a별명에 10을 별명용으로 한다.
	//							 a = 9; 10을 9로 해라.
	// const int& a =func();|	 a별명을 10의 별명으로 해라		|	func안에서 지역 변수를 return하지 않아야 함.
	//							 10의 별명을 a라고 한다.
	//							 const int& a = 10;
