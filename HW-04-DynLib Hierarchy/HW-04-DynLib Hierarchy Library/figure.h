// figures_2.h

#pragma once

#ifdef HW04DYNLIBHIERARCHYLIBRARY_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif

/*
������������ ���� ������
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
	������� ����� ������
	*/
	FIGURELIBRARY_API class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		/*
		vprint
		*/
		FIGURELIBRARY_API virtual void print_figure();

		/*
		����� ����� ������
		*/
		FIGURELIBRARY_API std::string get_figure_name();

		// ������������ ------------------------------------------- //

		/*
		����������� �� ���������
		�����
		*/
		FIGURELIBRARY_API Figure() = delete;

		/*
		����������� � �����������
		�� ���� int ���������� ������
		� string �������� ������
		*/
		FIGURELIBRARY_API Figure(std::string);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// �������� ������

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE