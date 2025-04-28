/*
* 캡슐화
* 상속 - 공통된 코들르 하나로 묶을 수 있다.
* 상속을 언제 해야 하는가? "IS-A" "Has-A"
* 
* 상속을 사용하면 어떤 장점이 있는가?
*/
#include "common.h"

int main()
{
	
	MonsterManager monsterManager;

	Enemy slime2(1, 5);
	Slime slime(1,5);
	Orc orc(2, 10);


	monsterManager.BattleWithPlayer(slime2);
	monsterManager.BattleWithPlayer(slime);
	monsterManager.BattleWithPlayer(orc);
	
}