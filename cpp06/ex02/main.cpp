#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <stdlib.h>
# include <time.h>
# include <iostream>
# include <string>

Base*	makeA()
{
	Base* a = new A;
	return(a);
}

Base*	makeB()
{
	Base* b = new B;
	return(b);
}

Base*	makeC()
{
	Base* c = new C;
	return(c);
}

Base * generate(void)
{
	int rng;

	srand( time( NULL ) );
	rng = rand() % 3; // generates a random number between 0 and 2

	Base *(* classes[3])();

	classes[0] = &makeA;
	classes[1] = &makeB;
	classes[2] = &makeC;

	//std::cout << "Number generated is " << rng << std::endl; // if you want to see what type is created here
	return(classes[rng]());
}

// "If the cast fails and new-type (the target type) is a reference type, it throws an exception"
void identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type is : a" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		try
		{
			B & b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Type is : b" << std::endl;
			return;
		}
		catch(const std::exception& e)
		{
			try
			{
				C & c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "Type is : c" << std::endl;
				return;
			}
			catch(const std::exception& e)
			{
				std::cerr << "Unidentified type." << std::endl;
			}
		}
	}
}

// "If the cast fails and new-type is a pointer type, it returns a null pointer of that type."
void identify(Base* p)
{
	A * a = dynamic_cast<A*>(p);
	B * b = dynamic_cast<B*>(p);
	C * c = dynamic_cast<C*>(p);
	
	if (a)
	{
		std::cout << "Type is : a" << std::endl;
		return;
	}
	if (b)
	{
		std::cout << "Type is : b" << std::endl;
		return;
	}
	if (c)
	{
		std::cout << "Type is : c" << std::endl;
		return;
	}
}


int	main(void)
{
	Base * base = NULL;
	base = generate();
	Base & ref = *base;

	identify(ref);
	identify(base);
	return (0);
}