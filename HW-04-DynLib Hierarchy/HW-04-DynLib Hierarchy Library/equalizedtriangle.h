// equalizedtriangle.h

#pragma once

#include "equalsidedtriangle.h"
#include <string>

namespace jinx
{
	/*
	�������������� �����������
	*/
	FIGURELIBRARY_API class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		FIGURELIBRARY_API EqualizedTriangle() = delete;

		FIGURELIBRARY_API EqualizedTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx