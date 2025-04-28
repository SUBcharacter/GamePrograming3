#include "MonsterManager.h"

void MonsterManager::BattleWithPlayer(Enemy monster)
{
	// 몬스터들은 고블린, 오크?
	
	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "슬라임의 전투 실행" << endl;
	}
	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "오크 전투 실행" << endl;
	}

	// 플레이어의 값을 설정한다.
	// 플레이어에게 공격을 한다.
	monster.Attack();
}
