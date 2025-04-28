#pragma once
#include "common.h"
#include "Utility.h"

class Runner
{
private:
	int runDist;
	bool isEnd;
protected:
	int minSpeed;
	int maxSpeed;

	string symbol;
public:
	Runner() : runDist(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E") {}
	Runner(string symbol) : runDist(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	
	void Run();
	bool CheckEndLine(int length);
};

class Player : public Runner
{
private:

public:
	Player() : Runner()
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {}

public:
	void Run();
	void Upgrade();
};

class Enemy : public Runner
{

};