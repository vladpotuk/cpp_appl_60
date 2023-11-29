#include "Clock.h"
#include "Digits.h"


int main()

{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(handle, FOREGROUND_RED);

	Clock* clock = new Clock();
	clock->show();

	/*Digits::one(0, 0);
	Digits::nine(10, 0);*/


	return 0;
}