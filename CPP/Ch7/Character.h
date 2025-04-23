#pragma once

#include "Skill.h"
#include "Entity.h"

class Character : public Entity
{
private:
	 
public:
	void UseSkill(Skill& skill);
	void UseHP();
};

