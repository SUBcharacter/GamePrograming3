#pragma once
#include "common.h"
#include "Utility.h"

class Runner
{
private:
	
	bool isEnd;
protected:
	int runDist;
	int minSpeed;
	int maxSpeed;

	string symbol;

	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();
public:
	Runner() : runDist(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E") {}
	Runner(string symbol) : runDist(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	
	void Run();
	bool CheckEndLine(int length);
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