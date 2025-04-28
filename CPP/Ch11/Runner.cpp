#include "Runner.h"

void Runner::Run()
{
	// maxSpeed 제어해주는 함수
	runDist += RandomUtil::GetRandomInt(maxSpeed);
	for (int i = 0; i < runDist; i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
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

void Player::Run()
{
	Runner::Run();
	cout << "~~";
}

void Player::Upgrade()
{

}
