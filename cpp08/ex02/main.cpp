#include "MutantStack.hpp"
#include <list>

#define END "\033[0m"
#define GREEN "\033[32m"

int main()
{
	std::cout << GREEN << "Subject's main :" << END << std::endl;
	/* SUBJECT'S MAIN */

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	//std::cout << "Last value added is : "; // uncomment for more readability
	std::cout << mstack.top() << std::endl;
	//std::cout << "Removing \"17\" (last added) from our MutantStack" << std::endl; // uncomment for more readability
	mstack.pop();
	//std::cout << "MutantStack has currently size : "; // uncomment for more readability
	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	//std::cout << "MutantStack now contains : " << std::endl; // uncomment for more readability
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;



	/* COMPARING */
	std::cout << GREEN << "Creating a simple MutantStack :" << END << std::endl;
	MutantStack<int> mstack2;

	mstack2.push(1);
	mstack2.push(2);
	mstack2.push(3);
	mstack2.push(4);

	MutantStack<int>::iterator it2;
	MutantStack<int>::iterator ite2 = mstack2.end();
	for (it2 = mstack2.begin(); it2 != ite2; it2++)
	{
		std::cout << *it2 << std::endl;
	}
	std::stack<int> s2(mstack2);
	std::cout << std::endl;



	/* SAME WITH LIST */
	std::cout << GREEN << "Creating a simple list with almost same code :" << END << std::endl;
	{
		std::list<int> list;

		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
		list.push_back(4);

		std::list<int>::iterator it2;
		std::list<int>::iterator ite2 = list.end();
		for (it2 = list.begin(); it2 != ite2; it2++)
		{
			std::cout << *it2 << std::endl;
		}
	}
	return 0;
}