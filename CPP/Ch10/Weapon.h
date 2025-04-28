#pragma once
#include "common.h"

class Weapon
{
private:
	string name;
	int lv;
	int baseATK;
	int weight;
	int FinalATK;
protected:
	int finalATK;
	int DoUpgrade();
public:
	Weapon() {}
	Weapon(string name, int lv, int baseATK, int weight)
		: name(name), lv(1), baseATK(baseATK), weight(weight) {}
	
public:
	
	void ShowInfo();
	virtual void Attack();
	virtual void Upgrade();
};

class Spear : public Weapon
{
private:
	int specialATK;
public:
	Spear(string name, int lv, int baseATK, int weight, int specialATK) : Weapon(name, lv, baseATK, weight), specialATK(specialATK) {}
public:
	void Attack();
	void Upgrade() override;
};

class Sword : public Weapon
{
public:
	Sword(string name, int lv, int baseATK, int weight) : Weapon(name, lv, baseATK, weight) {}
public:
	void Attack();
	void Upgrade() override;
};

class Bow : public Weapon
{
public:
	Bow(string name, int lv, int baseATK, int weight) : Weapon(name, lv, baseATK, weight) {}
	void Attack();
	void Upgrade() override;
};

