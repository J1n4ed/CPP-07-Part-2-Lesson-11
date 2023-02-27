// twosidedsquare.h

#pragma once

#include "quadrangle.h"
#include <string>

namespace jinx
{
	/*
	Прямоугольник
	*/
	class TwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		FIGURELIBRARY_API TwoSideSquare() = delete;

		FIGURELIBRARY_API TwoSideSquare(std::string, int, int, int, int, int, int, int, int);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class TwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx