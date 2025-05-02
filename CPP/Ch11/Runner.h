#pragma once
#include "common.h"
#include "Utility.h"

enum PlayerStat
{
	MINSPEED,MAXSPEED,NONE
};

class Runner
{
private:
	
	bool isEnd;
protected:
	PlayerStat stat;
	int runDist;
	int minSpeed;
	int maxSpeed;

	int money;

	

	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();
public:
	string symbol;

	Runner() 
		: runDist(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E"), stat(PlayerStat::NONE), money(1000) {}
	Runner(string symbol) 
		: runDist(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol), stat(PlayerStat::NONE), money(1000) {}
	
	void Run();
	bool CheckEndLine(int length);
	
	virtual void ShowPlayerGameInfo();

	void Upgrade(PlayerStat stat);
	void Upgrade(PlayerStat stat, int amount);

	void SetMin(int value);
	void SetMax(int value);
};

class Player : public Runner
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;
	


public:
	Player() : Runner()
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {}

	void ShowPlayerGameInfo() override;

	void Upgrade(PlayerStat stat);
	
};

class Enemy : public Runner
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;



public:
	Enemy() : Runner()
	{
		symbol = "E";
	}
	Enemy(string symbol) : Runner(symbol) {}

};