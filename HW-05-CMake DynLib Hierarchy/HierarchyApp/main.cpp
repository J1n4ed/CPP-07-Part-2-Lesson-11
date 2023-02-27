// main.cpp

/*
  27.02.2023
  Тема 2, Занятие 11
  Работа 3, Иерархия классов в DLL, проекты VC++
  CPP-07
  @j1n4ed
*/

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#include <string>
#endif // windows

#ifdef _WIN64
#include <Windows.h>
#endif

#ifdef linux
#include <stdlib.h>
#include <string.h>
#endif // linux

#include "figure_hierarchy.h"
#include "figexception.h"

void print_info(jinx::Figure*);

int main(int argc, char** argv)
{

#ifdef _WIN32

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#endif // _WIN32

#ifdef _WIN64

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#endif

#ifdef linux

	setlocale(LC_ALL, "Russian");

#endif // linux

	// pointers

	jinx::Triangle* ptr_Triangle;
	jinx::Quadrangle* ptr_Quadrangle;
	jinx::Figure* ptr_Figure;

	// TRY ----------------------------------------------------------------
	try
	{
		// треугольник
		jinx::Triangle figTriangle("Треугольник", 10, 20, 30, 50, 60, 70);
		ptr_Figure = &figTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// прямоугольный треугольник
		jinx::QuadTriangle figQuadTriangle("Прямоугольный треугольник", 10, 20, 30, 50, 40, 90);
		ptr_Figure = &figQuadTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// равнобедренный треугольник
		jinx::EqualSidedTriangle figEqualSideTriangle("Равнобедренный треугольник", 10, 20, 10, 50, 80, 50);
		ptr_Figure = &figEqualSideTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// равносторонний треугольник
		jinx::EqualizedTriangle figEqualizedTriangle("Равносторонний треугольник", 30, 30, 30, 60, 60, 60);
		ptr_Figure = &figEqualizedTriangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// четырёхугольник
		jinx::Quadrangle figQuadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
		ptr_Figure = &figQuadrangle;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// прямоугольный
		jinx::TwoSideSquare figTwoSideSquare("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90);
		ptr_Figure = &figTwoSideSquare;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// квадрат
		jinx::Square figSquare("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
		ptr_Figure = &figSquare;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// параллепипед
		jinx::AngledTwoSideSquare figAngleTwoSideSq("Параллепипед", 20, 30, 30, 40, 30, 20, 90, 60);
		ptr_Figure = &figAngleTwoSideSq;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// TRY ----------------------------------------------------------------
	try
	{
		// ромб
		jinx::AngledSquare figAngledSq("Ромб", 30, 30, 30, 30, 20, 160, 20, 160);
		ptr_Figure = &figAngledSq;
		print_info(ptr_Figure);
		std::cout << '\n';
	}
	catch (const jinx::CreateFigureException& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "UNKNOWN ERROR!" << std::endl;
	}
	// END TRY ------------------------------------------------------------

	// clear and exit

	// ------------------
	std::cout << "Нажмите любую кнопку для завершения...\n";
	std::getchar();
	return EXIT_SUCCESS;
}

void print_info(jinx::Figure* Figure)
{
	Figure->print_figure();
}