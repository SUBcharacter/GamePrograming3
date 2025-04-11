/*
* 작성일 : 25-04-10
* 작성자 : 이윤기
* 주제 : C언어와 CPP의 공통점과 차이점
*/

#include <iostream> // 입출력 함수를 사용하기 위한 cpp 라이브러리

/*
*  cpp 추가된 문법을 이해한다
*  1. std:: 분석
*  2. 코드에서 std:: 지워보면?
*  3. 결과 : 식별자 cout이 정의되어 있지 않음
*  Q. iostream 추가했는데 왜 "cout"을 찾을 수 없나?
*  A. "cout" 특별한 공간에 존재하기 때문에 찾을 수 없다.
*  Q2. 그 특별한 공간을 어떻게 사용해야 하나?
*  A. namespace에 대한 이해가 필요함.
*/

// A회사 Acom, B회사 Bcom
// Acom에서 만든 goods, Bcom에서 만든 goods
// 문제점 : 특정 키워드의 이름들이 같으면 컴퓨터가 구분해서 인식하지 못한다. = 에러 발생
// 변수의 이름 앞에 이름공간을 추가해준다.
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
	std::cout << "주제 : 이름 공간에 대한 이해" << std::endl;


	// 이름 공간의 첫번째 예제.
	// 같은 이름의 변수를 사용하는 문법이 추가
	// 사용법 : 이름::변수;

	std::cin >> Acom::goods;
	std::cout << "A회사의 상품 이름 : " << Acom::goods << std::endl;

	std::cin >> Bcom::goods;
	std::cout << "B회사의 상품 이름 : " << Bcom::goods << std::endl;

	// 문제1. 숫자를 5개 입력을 받아서 A회사의 합계 저장을 한 다음, 숫자를 5개 입력을 받아서 B회사의 합계에도 저장을 해주세요.
	// A회사 B회사 합계 변수 이름은 int sum 동일하게 작성해주세요

	// 1. std::cin int 값 입력받기
	// 2. for반복문 5회 더하기
	// 3. 이름 공간의 sum 변수에 저장하고 출력하기

	for (int i = 0; i < 5; i++)
	{
		std::cin >> Acom::input[i];
		Acom::sum += Acom::input[i];

	}
	std::cout << "A회사의 합 : " << Acom::sum << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> Bcom::input[i];
		Bcom::sum += Bcom::input[i];

	}
	std::cout << "B회사의 합 : " << Bcom::sum << std::endl;


	// ToyProject1 프로젝트. c++ 추가된 문법을 게임에 적용하는 시간.
}