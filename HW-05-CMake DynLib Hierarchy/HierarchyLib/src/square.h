// square.h

#pragma once

#include "twosidedsquare.h"
#include <string>

namespace jinx
{
	/*
	 вадрат
	*/
	__declspec(dllexport) class Square : public TwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Юетоды ------------------------------------------ //	

		// †ЭНЧУЦФ†УЭЦЯ ------------------------------------------- //

		/*
		†онструктор по умолчанию удал™н
		*/
		__declspec(dllexport) Square() = delete;

		__declspec(dllexport) Square(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class Square // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx