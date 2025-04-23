#pragma once
/*
* Player기능 구현.
* Enemy 기능을 구현.
* Player, Enemy 객체의 공통적인 데이터
*/

/*
* protected : 자식 객체는 열려있고 그 이외에는 접근을 못하게 막는 것
* 부모 객체가 넘겨주고 싶지 않은 데이터를 private
* 자식에게 넘겨주고 싶은 데이터를 protected
*/

class Entity
{
private:
	int HP;
	int MP;
	int DEF;

protected:
	int HP_protected;
	int MP_protected;
	int DEF_protected;
public:
	void Attacked();
	void Defenced();
	void Recovery();
};

