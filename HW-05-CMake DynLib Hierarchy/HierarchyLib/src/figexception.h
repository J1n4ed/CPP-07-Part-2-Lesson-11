#pragma once

#include <iostream>

namespace jinx
{

	__declspec(dllexport) class CreateFigureException : public std::exception
	{
	public:
		__declspec(dllexport) const char* what() const override
		{
			return "����� �������� �������� ������!\n";
		}
	};

} // END OF jinx namespace