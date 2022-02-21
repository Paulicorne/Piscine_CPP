#include <iostream>

int main(void)
{
	std::string msg = "HI THIS IS BRAIN";

	std::string* stringPTR = &msg; // giving variable's adress to the pointer
	std::string& stringREF = msg; // giving variable to the reference
	
	/*	it's impossible to declare a reference without initializing it : */
	//std::string& stringREF; // this will give errors. A ref is a link, it MUST be initialized.

	/* prints addresses */

	std::cout << &msg << std::endl;
	std::cout << stringPTR << std::endl; // bc a pointer is actually just an adress.
	std::cout << &stringREF << std::endl << std::endl; // getting stringREF's address, and stringREF is the same thing as msg, the initial value.

	/* prints value itself */

	std::cout << msg << std::endl;
	std::cout << *stringPTR << std::endl; // dereferencing pointer to access value
	std::cout << stringREF << std::endl; // ref is already the same thing as the value, no dereference needed.
}