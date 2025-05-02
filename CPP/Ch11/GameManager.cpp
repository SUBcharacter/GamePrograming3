#include "GameManager.h"

void GameManager::ShowTitle()
{
	// 타이틀 먼저 띄우고
	ConsoleUtil::GoToXY(30, 6);
	cout << "제목 출력" << endl;
	// 그다음 BGM
	//ConsoleUtil::PlayGameBGM(_T("sound.wav"));
}

void GameManager::ShopPhase()
{
	// 플레이어의 강화 시스템 필요
	system("cls");
	
	cout << "상점 진입" << endl << endl <<endl;

	cout << "1_게임 시작" << endl << endl;
	cout << "2_최소 속도 1 증가" << endl << endl;
	cout << "3_최대 속도 1 증가" << endl << endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		cout << "게임 시작" << endl;
		GamePhase();
	}
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MINSPEED);
	}
	else if (input == 3)
	{
		player->Upgrade(PlayerStat::MAXSPEED);
	}
}

void GameManager::GamePhase()
{
	
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");

	string line = "===========================================================";

	int endLine = line.length();

	while (true)
	{

		Sleep(500); // 1초 간격으로 화면을 업데이트
		system("cls");



		cout << line << endl;

		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();

		cout << line << endl;

		player->ShowPlayerGameInfo();


		if (player->CheckEndLine(endLine) ||
			runB->CheckEndLine(endLine) ||
			runC->CheckEndLine(endLine) ||
			runD->CheckEndLine(endLine)
			)
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endLine))
	{
		cout << "우승자 : "<< player->symbol << endl;
	}
	else if (runB->CheckEndLine(endLine))
	{
		cout << "우승자 : " << runB->symbol << endl;
	}
	else if (runC->CheckEndLine(endLine))
	{
		cout << "우승자 : C" << runC->symbol << endl;
	}
	else if (runD->CheckEndLine(endLine))
	{
		cout << "우승자 : D" << runD->symbol <<endl;
	}

	cout << "계속 하시려면 아무키나 누르십시오" << endl;
	_getch();
}

void GameManager::Play()
{
	ShowTitle();
	player = new Player("PP");
	while (true)
	{
		ShopPhase();
		

		
	}

}
