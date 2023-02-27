// square.h

#pragma once

#include "twosidedsquare.h"
#include <string>

namespace jinx
{
	/*
	 вадрат
	*/
	class Square : public TwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Юетоды ------------------------------------------ //	

		// †ЭНЧУЦФ†УЭЦЯ ------------------------------------------- //

		/*
		†онструктор по умолчанию удал™н
		*/
		Square() = delete;

		Square(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class Square // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx