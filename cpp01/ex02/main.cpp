#include <iostream>

int main(void)
{
	std::string msg = "HI THIS IS BRAIN";

	std::string* stringPTR = &msg; // giving variable's adress to the pointer
	std::string& stringREF = msg; // giving variable to the reference
/* it's impossible to declare a reference withou initializing it :
	std::string& stringREF; // gives errors
*/

/* prints address*/

	std::cout << &msg << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl<< std::endl;

/* prints value itself */

	std::cout << msg << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}