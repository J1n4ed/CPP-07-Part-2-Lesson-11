// angledtwosidesquare.h

#pragma once

#include "quadrangle.h"
#include <string>

namespace jinx
{
	/*
	������������
	*/
	__declspec(dllexport) class AngledTwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ����������� ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		__declspec(dllexport) AngledTwoSideSquare() = delete;

		__declspec(dllexport) AngledTwoSideSquare(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx