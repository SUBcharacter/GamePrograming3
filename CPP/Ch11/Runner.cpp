#include "Runner.h"

void Runner::SetMaxSpeed()
{
	runDist += RandomUtil::GetRandomInt(maxSpeed); // 1. 캐릭터의 최대 속도 설정
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < runDist; i++)
	{
		cout << " ";						// 2.이동한다.
	}
}

void Runner::SetShape()
{
	cout << symbol << endl;
}

void Runner::Run()
{
	// maxSpeed 제어해주는 함수
	SetMaxSpeed();			//변경 가능 함수
	DrawMoveDistance();		//변경 불가 함수
	SetShape();				//변경 가능 함수

	
}

bool Runner::CheckEndLine(int length)
{
	if (runDist >= length)
	{
		isEnd = true;
	}
	else
		isEnd = false;
	
	return isEnd;
}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 1; // 아이콘, 스킬이름, 효과 : 플레이어의 최대 속도를 1 증가 시켜주는 스킬
	runDist += RandomUtil::GetRandomInt(applyMaxSpeed);

	
}

void Player::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);
	if (percent > 50)
	{
		cout << "~" << symbol << endl;
	}
	else
		cout << symbol << endl;
}

void Enemy::SetMaxSpeed()
{
	Runner::SetMaxSpeed();
}

void Enemy::SetShape()
{
}
