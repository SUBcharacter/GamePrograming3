#include "Synergy.h"

void FirePower::Activate(int stack)
{

	count += stack;

	switch (count)
	{
	case 1:
	case 2:
		weight = 0.3;
	case 3:
	case 4:
		weight = 0.5;
	default:
		weight = 0;
	}
}
