/*
* 상속.
* 1. 공통된 내용을 하나로 묶는 방법
* 2. 언제 상속을 해야되는가?
*/

#include "common.h"
#include "Book.h"
int main()
{
	Book book;
	SpellBook spBook;
	StoryBook stBook;
	QuestBook qBook;

	book.Read();
	book.ShowPage();
	spBook.Read();
	spBook.ShowPage();
	stBook.Read();
	stBook.ShowPage();
	qBook.Read();
	qBook.ShowPage();
}