// 클래스를 만드는 연습
#include "common.h"
#include "Base.h"
#include "Utility.h"
#include "Runner.h"

void ClassDefaultInfo()
{
	Base* base = new Base(1);

	delete base;
	Base* derived = new Derived();
	derived->Do();
	delete derived;
}

/*
* 달리기 게임
* ----------------------------------
* 1
* 2
* 3
* 4
* ----------------------------------
*/

int main()
{
	ClassDefaultInfo();
	system("cls");
	cout << "달리기 게임 코드" << endl;

	// 사운드를 출력해주는 기능을 작성
	//ConsoleUtil::PlayGameBGM(_T("sound.wav"));
	_getch();

	Runner* runA = new Player("PP");
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");

	string line = "===========================================================";

	int endLine = line.length();
	//ConsoleUtil::PlayGameBGM(_T("BGM.wav"));
	while (true)
	{
		
		Sleep(500); // 1초 간격으로 화면을 업데이트
		system("cls");

		

		cout << line << endl;

		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();

		cout << line << endl;

		
		
		
		if (runA->CheckEndLine(endLine) ||
			runB->CheckEndLine(endLine) ||
			runC->CheckEndLine(endLine) ||
			runD->CheckEndLine(endLine)
			)
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endLine))
	{
		cout << "우승자 : A" << endl;
	}
	else if (runB->CheckEndLine(endLine))
	{
		cout << "우승자 : B" << endl;
	}
	else if (runC->CheckEndLine(endLine))
	{
		cout << "우승자 : C" << endl;
	}
	else if (runD->CheckEndLine(endLine))
	{
		cout << "우승자 : D" << endl;
	}
	//ConsoleUtil::PlayBGM(_T("Win.wav"));
}