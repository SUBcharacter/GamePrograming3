#include "Image.h"

char SlimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{" (****)   "},
	{" (*  *)   "},
	{" (*  *)   "},
	{" (****)   "},
	{"          "},
	{"          "},
	{"          "},
	{"          "}
};

char SlimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{" (****)   "},
	{" (*  *)   "},
	{" (*  *)   "},
	{" (****)   "},
	{" V    V   "},
	{"          "},
	{"          "},
	{"          "}
};
char SlimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{" (****)~  "},
	{" (*  *)~  "},
	{" (*  *)~  "},
	{" (****)~  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "}
};

char PlayerIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"    O |  "},
	{"    T +   "},
	{"    ^     "},
	{"          "},
	{"          "},
	{"          "},
	{"          "}
};

char PlayerBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"     ^^^  "},
	{"          "},
	{"    O |   "},
	{"    T +   "},
	{"    ^     "},
	{"          "},
	{"          "},
	{"          "},
	{"          "}
};
char PlayerMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"   ~O |   "},
	{"   ~T +   "},
	{"   ~^     "},
	{"          "},
	{"          "},
	{"          "},
	{"          "}
};