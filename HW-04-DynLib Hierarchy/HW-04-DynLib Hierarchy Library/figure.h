// figures_2.h

#pragma once

#ifdef HW04DYNLIBHIERARCHYLIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif

/*
Заголовочный файл фигуры
*/

#include <string>

#ifdef HW04DYNLIBHIERARCHYLIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif

namespace jinx
{
	/*
	Базовый класс фигуры
	*/
	FIGURELIBRARY_API class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		/*
		vprint
		*/
		FIGURELIBRARY_API virtual void print_figure();

		/*
		Вывод имени фигуры
		*/
		FIGURELIBRARY_API std::string get_figure_name();

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию
		Удалён
		*/
		FIGURELIBRARY_API Figure() = delete;

		/*
		Конструктор с параметрами
		На вход int количество сторон
		и string название фигуры
		*/
		FIGURELIBRARY_API Figure(std::string);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// название фигуры

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE