/*
* ��ǥ : cpp ���� ȭ�� �����ϱ�
* ���� : Windows.h GoToXY() �籸��
* ����� : cpp qkdtlrdmfh dlqcnffurgkrl
* �̷� : namespace �����غ���
*/

/*
* �̸� ������ ����� ���� ����
* 1.�ٸ� ������Ʈ copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �� �� �ִ�.
* 2. �̸������� ������ �̸��� ���ؼ� �ڵ带 �з��� �� �ִ�.
*/
#include <iostream>
#include <Windows.h>
#include <conio.h>

namespace cutils
{
	void GoToXY(int x, int y)
	{
		COORD cord = { x, y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
	}
}

int main()
{
	// ���� 1. 10,10 ��ǥ�� �÷��̾��� ���� �ؽ�Ʈ�� ����غ���

	

	//���� 2. �÷��̾��� �̸��� �Է� �޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ ���� �Ʒ��� ���
	//�Է� ���� ������ �޾Ƽ�, 1�� ������ �÷��̾� �̸� �߰��ϱ�
	//2�� ������ ȭ�鿡 �÷��̾� ������ ����ϱ�

	char name[10] = " ";

	while (true)
	{
		std::cout << "1_ ������� �̸��� ������ �� �ֽ��ϴ�. 2_ �÷��̾��� ������ ȭ�鿡 ����մϴ�." << std::endl;
		int input = 0;
		std::cin >> input;
		
		if (input == 1)
		{
			system("cls");
			std::cout << "������ �̸��� �Է��� �ֽʽÿ�." << std::endl;
			std::cin >> name;
		}
		else if (input == 2)
		{
			cutils::GoToXY(10, 10);
			std::cout << "�÷��̾��� ����";
			cutils::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸� : " << name;
			
		}
		else
		{

		}
		_getch();
		system("cls");
		
	}
}