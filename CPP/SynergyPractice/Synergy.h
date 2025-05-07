#pragma once
#include "common.h"
#include "SynergyManager.h"
#include "Weapon.h"


class Synergy
{
protected:
	int count;
	
	
public:
	virtual void Activate(int count) = 0;
	
};

class FirePower : public Synergy
{
public:
	float weight;
	void Activate(int stack) override;
};

class SlowEnemy : public Synergy
{
public:
	float weight;
	void Activate(int stack) override;
};