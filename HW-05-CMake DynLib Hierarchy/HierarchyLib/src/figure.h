// figures_2.h

#pragma once

/*
Заголовочный файл фигуры
*/

#include <string>
#include "figexception.h"

namespace jinx
{
	/*
	Базовый класс фигуры
	*/
	__declspec(dllexport) class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		/*
		vprint
		*/
		__declspec(dllexport) virtual void print_figure();

		/*
		Вывод имени фигуры
		*/
		__declspec(dllexport) std::string get_figure_name();

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию
		Удалён
		*/
		__declspec(dllexport) Figure() = delete;

		/*
		Конструктор с параметрами
		На вход int количество сторон
		и string название фигуры
		*/
		__declspec(dllexport) Figure(std::string);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// название фигуры

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE