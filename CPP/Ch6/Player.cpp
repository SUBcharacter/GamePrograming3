#include "Player.h"

void Player::AttackedBy(int damage)
{
	if (damage < 0)
	{
		cout << "피해량은 음수가 될 수 없습니다." << endl;
		damage = 0;
	}
	HP -= damage;

	if (HP < 0)
	{
		isDeath = true;
	}
}

void Player::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return;
	}

	HP += heal;

}
