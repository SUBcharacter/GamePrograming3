/*
* 작성시작일 : 25-04-17
* 작성자 : 이윤기
* 목표 : 턴제 전투 시스템 구현
*/

/*
* 전투 시스템
* Player, Enemy라는 객체 필요
* 필요한 데이터는?
* 체력, 공격력, 방어력, 민첩,
* 사망 -> 체력이 0이하
* 체력을 조작하는 기능 필요. (공격 기능, 체력 회복 기능)
* 
* 
*/

#include "Enemy.h"

int main()
{
	Enemy Slime(50, 5, 1, "슬라임", SlimeBattle);

	int x = 30, y = 5;

	
	_getch();

	/*
	* 적이 어떤 조건일때 SlimeIdle이어야 하는가?
	* 적이 어떤 조건일때 Move인가
	* 적이 어떤 조건일때 Battle인가
	*/

	while (1)
	{
		
		
		Slime.SetBattleImage(SlimeIdle, x, y);
		Sleep(500);
		system("cls");
		Slime.SetBattleImage(SlimeMove, x, y);
		Sleep(500);
		system("cls");
	}
}