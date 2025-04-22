#pragma once

/*
* A, B 개발자
* A(시니어 개발자), B(주니어 개발자)
* A 캐릭터. B 스킬
*/

/*
* 스킬을 만든다
* 객체 : 마나, 스탯, 이펙트
* 스킬.Use() - skill.Use();
* 
* A개발자. Skill skill;  skill.Use();
* 
* skill. mana stat effect
* ??
* 
* C개발자. stat mana effect`
*/

/*
* 정보 은닉. 외부에서 모르는 정보는 숨겨라.
* 캡슐화 : 기능을 구현할 때 세부 내용을 공개할 필요없이 사용할 함수만 공개 하는것.
*/

#include <iostream>

using namespace std;

class Mana
{
public:
	void Use();
};

class Stat
{
public:
	void Use();
};

class Effect
{
public:
	void Use();
};

class Skill
{
private:
	Mana mana;
	Stat stat;
	Effect effect;
public:
	/// <summary>
	/// 마나, 스텟 사용 후, 이펙트 출력
	/// </summary>
	void Use();
};

