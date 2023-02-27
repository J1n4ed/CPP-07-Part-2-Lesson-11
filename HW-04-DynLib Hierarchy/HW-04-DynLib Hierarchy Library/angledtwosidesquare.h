// angledtwosidesquare.h

#pragma once

#include "quadrangle.h"
#include <string>

namespace jinx
{
	/*
	Параллепепед
	*/
	class AngledTwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОР ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		FIGURELIBRARY_API AngledTwoSideSquare() = delete;

		FIGURELIBRARY_API AngledTwoSideSquare(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx