// 클래스를 만드는 연습
#include "common.h"
#include "Base.h"
#include "Utility.h"
#include "Runner.h"
#include "GameManager.h"

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

	GameManager game;
	game.Play();
	// 사운드를 출력해주는 기능을 작성
	
	

	
	//ConsoleUtil::PlayGameBGM(_T("BGM.wav"));
	
	//ConsoleUtil::PlayBGM(_T("Win.wav"));
}