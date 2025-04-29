#include "SoundUtil.h"

int main()
{
	cout << "배경 음악을 넣는 방법" << endl;
	// Windows.h PlaySound 함수

	//SND_SYNC : 사운드 파일이 전부 실행 되고 난 후에 아래 코드를 실행한다.
	//SND_ASYNC : 아래 코드와 별개로 파일이 실행된다.

	SoundUtil::PlayTitleSound(_T("sound.wav"));
	SoundUtil::PlayBGM(_T("sound.wav"));
	

	cout << "소리 출력" << endl;

	while (true)
	{

	}
}