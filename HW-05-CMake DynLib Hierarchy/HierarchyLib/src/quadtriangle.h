// quadtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	������������� �����������
	*/
	__declspec(dllexport) class QuadTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		__declspec(dllexport) QuadTriangle() = delete;

		__declspec(dllexport) QuadTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class QuadTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx