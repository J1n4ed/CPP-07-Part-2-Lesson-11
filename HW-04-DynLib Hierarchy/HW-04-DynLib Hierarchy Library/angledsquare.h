// angledsquare.h

#pragma once

#include "angledtwosidesquare.h"
#include <string>

namespace jinx
{
	/*
	����
	*/
	FIGURELIBRARY_API class AngledSquare : public AngledTwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		FIGURELIBRARY_API AngledSquare() = delete;

		FIGURELIBRARY_API AngledSquare(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
}