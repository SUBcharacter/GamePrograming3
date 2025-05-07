#include "Weapon.h"

void Handgun::Get()
{
	if (isHave)
	{
		std::cout << "이미 소유한 상태이므로 상태를 반환하다" << endl;
		return;
	}
	finalDamage = baseDamage * HG.weight;
	category = GUN;
	isHave = true;
}

void AssultRifle::Get()
{
	if (isHave)
	{
		std::cout << "이미 소유한 상태이므로 상태를 반환하다" << endl;
		return;
	}
	finalDamage = baseDamage * AR.weight;
	category = GUN;
	isHave = true;
}

void Staff::Get()
{
	if (isHave)
	{
		std::cout << "이미 소유한 상태이므로 상태를 반환하다" << endl;
		return;
	}
	finalDamage = baseDamage * Staff.weight;
	category = MAGIC;
	isHave = true;
}

void Weapon::Get()
{
}

void Weapon::LevelUP()
{
}
