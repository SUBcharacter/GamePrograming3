//스토리 게임 구성 요소
// 콘솔 유틸리티 함수
//Image 클래스
#include "common.h"
#include "Console.h"
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

int main()
{
	Console::CursorVisible(false);

	ImageModel image;
	Actor actor;

	Image gun(image.Glock, 11);
	Image fire(image.Fire, 6);

	gun.Show(0, 4);
	Sleep(500);
	fire.Show(42, 4);
	Sleep(50);
	system("cls");
	Sleep(500);
	Console::GoToXY(0, 15);
	actor.Tell(" ", "빗속에서 총성이 울려퍼진다.");
	_getch();
	system("cls");
	Sleep(1500);
	Console::GoToXY(0, 15);
	actor.Tell(" ", "짙은 혈향과 초연 냄새.");
	_getch();
	system("cls");
	Sleep(1500);
	Console::GoToXY(0, 15);
	actor.Tell(" ", "생명을 앗아갔다는 죽음의 냄새.");
	_getch();
	system("cls");
	Sleep(1500);
	Console::GoToXY(0, 15);
	actor.Tell(" ", "이제는 사람들에게 익숙해진 냄새가 되었다.");
	_getch();
	while (true);
}