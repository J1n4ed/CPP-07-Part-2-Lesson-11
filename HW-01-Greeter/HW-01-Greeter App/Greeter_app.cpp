// main client file Greeter_app.cpp

/*
  27.02.2023
  Тема 2, Занятие 11
  Работа 1,Статическая библиотека
  CPP-07
  @j1n4ed
*/

#include "Greeter.h"
#include <iostream>
#include <string>

#ifdef _WIN32
#include <Windows.h>
#endif

#ifdef _WIN64
#include <Windows.h>
#endif

#ifdef linux
#include <cstdlib>
#endif

int main(int argc, char** argv)
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif

#ifdef _WIN64
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif

#ifdef linux
	setlocale(LC_ALL, "russian");
#endif

	std::string userName;

	std::cout << "¬ведите им€: ";
	getline(std::cin, userName);

	std::cout << '\n';

	jinx::Greeter greeter;

	greeter.greet(userName);

	//-----------

	std::cout << '\n' << "Press any key to exit...";
	std::getchar();
	return EXIT_SUCCESS;
}