// triangle.h

#pragma once

#include "figure.h"
#include <string>

namespace jinx
{
	/*
	����� ����������
	*/
	__declspec(dllexport) class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //

		__declspec(dllexport) void print_figure() override;

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		__declspec(dllexport) Triangle() = delete;

		__declspec(dllexport) Triangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_;
		int angle_A_, angle_B_, angle_C_;

	}; // END OF class Triangle // ---------------------------------------------------------------------------------------------------------------- //

} // END OF jinx