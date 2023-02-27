// figures_2.h

#pragma once

/*
������������ ���� ������
*/

#include <string>
#include "figexception.h"

namespace jinx
{
	/*
	������� ����� ������
	*/
	__declspec(dllexport) class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		/*
		vprint
		*/
		__declspec(dllexport) virtual void print_figure();

		/*
		����� ����� ������
		*/
		__declspec(dllexport) std::string get_figure_name();

		// ������������ ------------------------------------------- //

		/*
		����������� �� ���������
		�����
		*/
		__declspec(dllexport) Figure() = delete;

		/*
		����������� � �����������
		�� ���� int ���������� ������
		� string �������� ������
		*/
		__declspec(dllexport) Figure(std::string);

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// �������� ������

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE