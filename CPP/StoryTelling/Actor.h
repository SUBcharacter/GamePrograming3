#pragma once
#include "common.h"

class Actor
{
public:
	void Tell(const string& teller, const string& story)
	{
		cout << endl;
		cout << "[" << teller << "]:";
		cout << story << std::endl;
	}

	bool Selection(const string& teller, const string& story)
	{

	}
};

