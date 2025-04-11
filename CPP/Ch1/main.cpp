/*
* �ۼ��� : 25-04-10
* �ۼ��� : ������
* ���� : C���� CPP�� �������� ������
*/

#include <iostream> // ����� �Լ��� ����ϱ� ���� cpp ���̺귯��

/*
*  cpp �߰��� ������ �����Ѵ�
*  1. std:: �м�
*  2. �ڵ忡�� std:: ��������?
*  3. ��� : �ĺ��� cout�� ���ǵǾ� ���� ����
*  Q. iostream �߰��ߴµ� �� "cout"�� ã�� �� ����?
*  A. "cout" Ư���� ������ �����ϱ� ������ ã�� �� ����.
*  Q2. �� Ư���� ������ ��� ����ؾ� �ϳ�?
*  A. namespace�� ���� ���ذ� �ʿ���.
*/

// Aȸ�� Acom, Bȸ�� Bcom
// Acom���� ���� goods, Bcom���� ���� goods
// ������ : Ư�� Ű������ �̸����� ������ ��ǻ�Ͱ� �����ؼ� �ν����� ���Ѵ�. = ���� �߻�
// ������ �̸� �տ� �̸������� �߰����ش�.
// Acom - goods
// Bcom - goods

namespace Acom
{
	int input[5], sum = 0;
	char goods[10];
}

namespace Bcom
{
	int input[5], sum = 0;
	char goods[10];
}



int main()
{
	std::cout << "Ch1" << std::endl;
	std::cout << "���� : �̸� ������ ���� ����" << std::endl;


	// �̸� ������ ù��° ����.
	// ���� �̸��� ������ ����ϴ� ������ �߰�
	// ���� : �̸�::����;

	std::cin >> Acom::goods;
	std::cout << "Aȸ���� ��ǰ �̸� : " << Acom::goods << std::endl;

	std::cin >> Bcom::goods;
	std::cout << "Bȸ���� ��ǰ �̸� : " << Bcom::goods << std::endl;

	// ����1. ���ڸ� 5�� �Է��� �޾Ƽ� Aȸ���� �հ� ������ �� ����, ���ڸ� 5�� �Է��� �޾Ƽ� Bȸ���� �հ迡�� ������ ���ּ���.
	// Aȸ�� Bȸ�� �հ� ���� �̸��� int sum �����ϰ� �ۼ����ּ���

	// 1. std::cin int �� �Է¹ޱ�
	// 2. for�ݺ��� 5ȸ ���ϱ�
	// 3. �̸� ������ sum ������ �����ϰ� ����ϱ�

	for (int i = 0; i < 5; i++)
	{
		std::cin >> Acom::input[i];
		Acom::sum += Acom::input[i];

	}
	std::cout << "Aȸ���� �� : " << Acom::sum << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> Bcom::input[i];
		Bcom::sum += Bcom::input[i];

	}
	std::cout << "Bȸ���� �� : " << Bcom::sum << std::endl;


	// ToyProject1 ������Ʈ. c++ �߰��� ������ ���ӿ� �����ϴ� �ð�.
}