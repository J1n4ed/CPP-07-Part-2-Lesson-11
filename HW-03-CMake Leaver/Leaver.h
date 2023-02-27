#pragma once

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

#include <string>

namespace jinx
{
	class Leaver
	{
	public:
		LEAVERLIBRARY_API void leave(std::string);
	};
}