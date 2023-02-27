// equalizedtriangle.h

#pragma once

#include "equalsidedtriangle.h"
#include <string>

namespace jinx
{
	/*
	�������������� �����������
	*/
	__declspec(dllexport) class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		__declspec(dllexport) EqualizedTriangle() = delete;

		__declspec(dllexport) EqualizedTriangle(std::string, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx