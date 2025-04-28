#include "Enemy.h"

void Enemy::Attack()
{
	CalculateFinalATK();
	cout << "최종 공격력 : " << endl;
}

void Enemy::CalculateFinalATK()
{
	// 레벨 * 기본 공격력
	finalATK = level * defaultATK;
}

void Slime::Attack()
{
	Enemy::Attack();
	cout << "슬라임 특수기능" << endl;
}

void Orc::Attack()
{
	Enemy::Attack();
	cout << "오크 특수기능" << endl;

}
