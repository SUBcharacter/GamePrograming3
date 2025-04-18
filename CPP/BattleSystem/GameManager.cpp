#include "GameManager.h"

void GameManager::GameLoop()
{
	while (1)
	{
		Animation();
		Battle();
		

	}
}

void GameManager::Battle()
{
	GoToXY(60, 5);
	cout << "플레이어의 정보";
	GoToXY(60, 6);
	cout << "체력 : " << currentPlayer.HP;
	GoToXY(60, 7);
	cout << "방어력 : " << currentPlayer.DEF;
	GoToXY(60, 8);
	cout << "공격력 : " << currentPlayer.ATK;

	GoToXY(80, 5);
	cout << "적 체력 : " << currentEnemy.HP;

	GoToXY(0, 15);
	// 플레이어 턴을 사용한다 -> 몬스터가 턴을 진행한다
	if (currentTutnState == PLAYERTURN)
	{
		PlayerTurn();
	}
	else if (currentTutnState == ENEMYTURN)
	{
		EnemyTurn();
	}
	else if (currentTutnState == GAMECLEAR)
	{
		// GameClear();
	}
	else if (currentTutnState == GAMEEND)
	{
		// GameEnd();
	}
}

void GameManager::Animation()
{
	system("cls");
	currentPlayer.SetBattleImage(PlayerIdle);
	currentEnemy.SetBattleImage(SlimeIdle);
	Sleep(500);
	system("cls");
	currentPlayer.SetBattleImage(PlayerMove);
	currentEnemy.SetBattleImage(SlimeMove);
	Sleep(500);
	
}

void GameManager::PlayerTurn()
{
	cout << "플레이어의 턴" << endl;
	cout << "1_ 공격" << endl;
	cout << "2_ 방어" << endl;
	cout << "3_ 아이템 사용" << endl;

	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1: currentEnemy.Attacked(currentPlayer.ATK); break;
	case 2: currentPlayer.Defence(); break;
	case 3: currentPlayer.UseItem(10); break;
	default: break;
	}

	currentTutnState = ENEMYTURN;
}

void GameManager::EnemyTurn()
{
	cout << "적의 턴" << endl;

	currentPlayer.Attacked(currentEnemy.ATK); 

	cout << "아무키나 입력하십시오" << endl;
	_getch();

	currentTutnState = PLAYERTURN;
}
