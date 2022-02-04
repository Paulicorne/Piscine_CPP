#include <iostream>

int main(void)
{
	std::string msg = "HI THIS IS BRAIN";
	std::string* stringPTR = &msg;
	std::string& stringREF = msg;

	std::cout << &msg << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl<< std::endl;

	std::cout << msg << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}