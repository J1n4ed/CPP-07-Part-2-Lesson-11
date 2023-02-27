#include "Greeter.h"
#include <iostream>
#include <string>

namespace jinx
{
	void Greeter::greet(std::string name)
	{
		std::cout << "Здравствуйте, " << name << '!';
	}
}