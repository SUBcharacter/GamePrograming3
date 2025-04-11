/*
* �ۼ��� : 25-04-10
* �ۼ��� : ������
* ���� : 
*/

#include <iostream>

/*
* ������ ���ظ� ���� �Լ� ���� Swap�Լ� �����ϱ�
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
// �Լ� �����ε�. �Լ��� �̸��� ���Ƶ� �Ű� ������ Ÿ���� �ٸ��� ������ �� �ִ�.
void SwapByRef(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// ����1. SwapPointer�Լ��� �����. �ּҸ� �����ڷ� �����ϴ� �Լ��� �����.
// ������ �����ڷ� ����� �ִ°�? �ƴ�. �ּ�, �迭 ���� �����ڷ� ���� �� �ִ�.
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
	// namespace std�� ���� �Ǿ��ִ� ���� �ȿ� cout �����ͼ� ���
	std::cout << "2��_ ������\n" << std::endl;

	// ������ ����� ����� ���еȴ�.
	// �Լ��� ����� ����� ���еȴ�.

	int num1;
	num1 = 1;

	int* num1ptr = &num1;
	int& num1ref = num1;

	num1ref += 1;
	
	std::cout << "num1�� �� : " << num1 << std::endl;
	std::cout << "num1�� �� num1ref �����ڷ� ȣ�� : " << num1ref << std::endl;
	

	// �����ڸ� ��� ����ϳ�?

	int input = 0;
	// scanf("%d",&input);
	// ������ Ȱ���� ���� : c++ �����ڸ� ����ؼ� �Լ��� ����Ҷ� *, & ��ȣ�� ������� �ʰ� ǥ���� �� �ִ�.
	
	// SwapByValue Ref�� ���� ����
	std::cout << "Call by Value�� Call by Reference ����" << std::endl;

	int value1 = 10, value2 = 20; // Value, Value2 ����Ǿ ����ϰ� �����, �Լ��� �̿��ؼ�

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


	std::cout << "�������� ����" << std::endl;

	int ssnum1 = 1;
	int ssnum2 = 100;
	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;

	std::cout << "ssnum1ptr�� ���� �� : " << ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�� ���� �� : " << ssnum2ptr << std::endl;

	SwapPointer(ssnum1ptr, ssnum2ptr);

	std::cout << "ssnum1ptr�� ���� �� : " << ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�� ���� �� : " << ssnum2ptr << std::endl;

	// �����ڸ� ����ϸ� �����Ϳ� ���� ��ȣ�� ������ �� �ִ�.
	// int, int ���� �ٲܶ��� �����ڸ� ����Ѵ�.
	// int*, int* ���� �ٲܶ��� int*& int*&

	// ������ ���� ���� �ؾ��� ����

	// int& ref; dpfj1. �����ڴ� ������ �� �ݵ�� �ʱ�ȭ�� �ʿ��ϴ�.

	int AAA = 10;
	int& AAAref = AAA;

	// const Ȱ���Ͽ��� �Լ��� ����ϴ� ������� ���̵带 �ȳ����� ��

	// return Ÿ�Կ� �����ڸ� ������ �� �����ؾ� �Ѵ�.

	// main �Լ������� ����	|	 �Լ��� �� ����(int func())		|	�Լ����� ������ ����(int& func())
	// int a =func();		|	 a�� ���� �����					|	a�� ���� �����. func�ȿ��� ���� ������ return���� �ʾƾ� ��.
	// int& a =func();		|	 a�� func���� ���� �������� �Ѵ�. |	func�ȿ��� ���� ������ return���� �ʾƾ� ��.
	//							 a���� 10�� ��������� �Ѵ�.
	//							 a = 9; 10�� 9�� �ض�.
	// const int& a =func();|	 a������ 10�� �������� �ض�		|	func�ȿ��� ���� ������ return���� �ʾƾ� ��.
	//							 10�� ������ a��� �Ѵ�.
	//							 const int& a = 10;
