#pragma once

#include <iostream>

#ifdef HW04DYNLIBHIERARCHYLIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif 

namespace jinx
{

	FIGURELIBRARY_API class CreateFigureException : public std::exception
	{
	public:
		FIGURELIBRARY_API const char* what() const override
		{
			return "Задан неверный параметр фигуры!\n";
		}
	};

} // END OF jinx namespace