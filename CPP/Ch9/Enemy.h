#pragma once
#include <iostream>

using namespace std;
// 몬스터 - 몬스터 조작, 관리

// 몬스터는 공격을 한다.

// 몬스터의 공격 규칙

// 최종 공격력 - 


/*
* 오버라이드(override)
*
* monster::Attack();
* Slime::Attack();
* Slime입장 몬스터 Attack, Slime Attack 어떤 Attack 사용해야하는가?
* 부모의 함수를 대체한다.
*
*  override
*/

/*
* virtual, override
*
* virtual : 코드가 실제(존재)하지 않는다. 다른 곳에서 이 함수를 찾아서 사용해라.
* override : 같은 이름의 함수를 자식에서 선언하면 부모의 코드가 숨겨진다.
*
* 슬라임, 고블린, 오크
* Monster.Attack();
* Slime.Attack();
* Goblin.Attack();
* Orc.Attack();
*
* 확장성 문제. 슬라임, 오크, 고블린.. 새로 추가할 몬스터의 개성을 추가할 수 없다.
*
* override키워드? 사람이 하는 실수를 보와해주는 키워드
*
*/

class ElementType
{

};

class Enemy // 몬스터 has 속성? 0
{
protected:
	int level;
	int defaultATK;
	int finalATK;
	ElementType type;
public:
	Enemy() {}
	Enemy(int level, int defaultATK) : level(level), defaultATK(defaultATK) {}
public:
	virtual void Attack();

	void CalculateFinalATK();

};

class Slime : public Enemy
{
public:
	Slime(int lv, int defaultATK) : Enemy(lv, defaultATK) {}
public:
	void Attack() override;
};

class Orc : public Enemy
{
public:
	Orc(int lv, int defaultATK) : Enemy(lv, defaultATK) {}
public:
	void Attack() override;
};