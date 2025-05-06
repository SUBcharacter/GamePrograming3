#pragma once
#include "common.h"
#include "SynergyManager.h"

class Synergy
{
private:
	int count;
	
public:
	virtual void Activate(int count) = 0;
	
};

class FirePower : Synergy
{
public:
	float weight;
	void Activate(int count) override;
};
