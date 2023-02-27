// quadrangle.h

#pragma once

#include "figure.h"
#include <string>

namespace jinx
{
	/*
	Любой четырёхугольник
	*/
	__declspec(dllexport) class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ћетоды ------------------------------------------ //	

		__declspec(dllexport) void print_figure() override;

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		__declspec(dllexport) Quadrangle() = delete;

		__declspec(dllexport) Quadrangle(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_, side_d_;
		int angle_A_, angle_B_, angle_C_, angle_D_;

	}; // END OF class Quadrangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx