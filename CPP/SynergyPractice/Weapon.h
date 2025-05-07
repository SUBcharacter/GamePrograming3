#pragma once
#include "common.h"
#include "Player.h"

enum WeaponCategory
{
	GUN, MAGIC
};

class Weapon
{
protected:
	WeaponCategory category;
	float baseDamage;
	float finalDamage;
	bool isHave;
public:

	virtual void Get();
	virtual void LevelUP();
};

class Handgun : public Weapon
{
public:
	void Get() override;
};

class AssultRifle : public Weapon
{
public:
	void Get() override;
};

class Staff : public Weapon
{
	
public:
	void Get() override;
};

class SniperRifle : public Weapon
{

};

