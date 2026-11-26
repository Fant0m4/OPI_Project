#include <iostream>
#include <Windows.h>
#include "HeaderTEST.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	COORD cord2 = { 0, 6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord2);
	for (int i = 1; i <= 25; i++) {
		std::cout << '#';
	}std::cout << "поле короче";
	

	timer();
}