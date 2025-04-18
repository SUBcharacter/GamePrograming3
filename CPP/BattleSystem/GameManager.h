#pragma once
#include "common.h"
#include "Enemy.h"
#include "Player.h"

struct GameManager
{
	Enemy currentEnemy;  // enemy 복사해서 사용한다.
	Player currentPlayer;
	TurnSystem currentTutnState;

	GameManager(Enemy enemy,Player player) : currentEnemy(enemy),currentPlayer(player)
	{
		currentTutnState = PLAYERTURN;
	}

	void GameLoop();
	
	void Battle();

	void Animation();

	// 플레이어의 행동
	void PlayerTurn();

	// 몬스터의 행동
	void EnemyTurn();

};