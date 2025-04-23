#include "Character.h"

// 스킬, 전투, 상점, 모험

void Character::UseSkill(Skill& skill)
{
	skill.Use();
}

void Character::UseHP()
{
	
	HP_protected -= 10;
}
