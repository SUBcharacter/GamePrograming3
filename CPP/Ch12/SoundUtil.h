#pragma once
#include <iostream>
#include <Windows.h>
#include <tchar.h>

using namespace std;

class SoundUtil
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);


};

