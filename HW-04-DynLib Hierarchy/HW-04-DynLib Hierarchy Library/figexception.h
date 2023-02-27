#pragma once

#include <iostream>

namespace jinx
{

	class CreateFigureException : public std::exception
	{
	public:
		FIGURELIBRARY_API const char* what() const override
		{
			return "Задан неверный параметр фигуры!\n";
		}
	};

} // END OF jinx namespace