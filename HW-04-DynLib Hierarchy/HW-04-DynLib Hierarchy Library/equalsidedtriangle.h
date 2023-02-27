// equalsidedtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	�������������� �����������
	*/
	FIGURELIBRARY_API class EqualSidedTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		FIGURELIBRARY_API EqualSidedTriangle() = delete;

		FIGURELIBRARY_API EqualSidedTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualSidedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx