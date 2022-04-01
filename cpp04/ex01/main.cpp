# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
    /* TESTS FROM SUBJECT */

    const Animal* i = new Cat();
    const Animal* j = new Dog();
    std::cout << std::endl;

    delete i;
    delete j;//should not create a leak

    std::cout << std::endl;
    std::cout << std::endl;

    /* ANIMALS ARRAY INIT as required */

	int index = 0;
	Animal *animals[10];    // = new Animal[10];
	std::cout<<std::endl;

	while (index < 10)
    {
		if (index < 5)
		{
			animals[index] = new Dog();
			std::cout<<std::endl;
		}
		else
		{
			animals[index] = new Cat();
			std::cout<<std::endl;
		}
		index++;
	}
    std::cout<<std::endl;
	std::cout<<std::endl;

// ---------------------------------------------------------------- //

    /* BRAIN TESTS w/Cat */
	//if uncomented, COMMENT TESTS BELOW
	
    Brain*	brain;
    Cat	*n = new Cat();

	std::cout<<std::endl;
	std::cout << "1st cat's ideas are : ";
	brain = n->getBrain();
	brain->setIdeas(0, "eat");
	brain->setIdeas(1, "ask for hug");
	brain->setIdeas(2, "play");
	brain->setIdeas(3, "sleep");
	for (int j = 0; j < 4; j++)
		std::cout << brain->getIdeas()[j] << ", ";
	std::cout << "and other things" << std::endl;
	std::cout<<std::endl;

    Brain*	brain2;
	Cat other(*n);

	std::cout<<std::endl;
	brain2 = other.getBrain();
	std::cout << "2nd cat's ideas are by default, via copy of 1st cat : ";
	for (int j = 0; j < 4; j++)
		std::cout << brain2->getIdeas()[j] << ", ";
	std::cout << "and other things" << std::endl;
	std::cout<<std::endl;


	std::cout << "Modifying 1st cat's ideas" << std::endl;
	brain->setIdeas(0, "EAT");
	brain->setIdeas(1, "HUG");
	brain->setIdeas(2, "PLAY");
	brain->setIdeas(3, "SLEEP");

	//brain2 = n->getBrain();
	std::cout << "1st cat's ideas are now : ";
	for (int j = 0; j < 4; j++)
		std::cout << brain->getIdeas()[j] << ", ";
	std::cout << "and other things" << std::endl;

	std::cout << "2nd cat's ideas are unchanged : ";
	for (int j = 0; j < 4; j++)
		std::cout << brain2->getIdeas()[j] << ", ";
	std::cout << "and other things" << std::endl;
	std::cout << std::endl;
	


    /* BRAIN & DEEPCOPY TESTS w/Dog */
	//if uncomented, COMMENT TESTS ABOVE

    // Brain*	brain;
    // Dog	*n = new Dog();

	// std::cout<<std::endl;
	// std::cout << "1st dog's ideas are : ";
	// brain = n->getBrain();
	// brain->setIdeas(0, "eat");
	// brain->setIdeas(1, "ask for hug");
	// brain->setIdeas(2, "play");
	// brain->setIdeas(3, "sleep");
	// for (int j = 0; j < 4; j++)
	// 	std::cout << brain->getIdeas()[j] << ", ";
	// std::cout << "and other things" << std::endl;
	// std::cout<<std::endl;

    // Brain*	brain2;
	// Dog other(*n);

	// std::cout<<std::endl;
	// brain2 = other.getBrain();
	// std::cout << "2nd dog's ideas are by default, via copy of 1st dog : ";
	// for (int j = 0; j < 4; j++)
	// 	std::cout << brain2->getIdeas()[j] << ", ";
	// for (int j = 0; j < 4; j++)
	// 	std::cout << brain->getIdeas()[j] << ", ";
	// std::cout << "and other things" << std::endl;
	// std::cout<<std::endl;


	// std::cout << "Modifying 1st dog's ideas" << std::endl;
	// brain->setIdeas(0, "EAT");
	// brain->setIdeas(1, "HUG");
	// brain->setIdeas(2, "PLAY");
	// brain->setIdeas(3, "SLEEP");

	// //brain2 = n->getBrain();
	// std::cout << "1st dog's ideas are now : ";
	// for (int j = 0; j < 4; j++)
	// 	std::cout << brain->getIdeas()[j] << ", ";
	// std::cout << "and other things" << std::endl;

	// std::cout << "2nd dog's ideas are unchanged : ";
	// for (int j = 0; j < 4; j++)
	// 	std::cout << brain2->getIdeas()[j] << ", ";
	// std::cout << "and other things" << std::endl;
	// std::cout << std::endl;

// ---------------------------------------------------------------- //

	/* DEEPCOPY TESTS */

	Dog	dog;
	{
		Dog tmp = dog;
		std::cout << "Tmp dog's brain adress is : " << std::endl;
		std::cout << tmp.getBrain() << std::endl;
	}

	std::cout << "Dog's brain adress is : " << std::endl;
	std::cout << dog.getBrain() << std::endl;

	std::cout << std::endl;
	Cat	cat;
	{
		Cat tmp = cat;
		std::cout << "Tmp cat's brain adress is : " << std::endl;
		std::cout << tmp.getBrain() << std::endl;
	}

	std::cout << "Cat's brain adress is : " << std::endl;
	std::cout << cat.getBrain() << std::endl;




     /* FREEING OBJECTS */
    // freeing array as required
	index = 0;

	while (index < 10)
	{
		std::cout << std::endl << index << std::endl;
		delete animals[index];
		index++;
	}
	std::cout << std::endl;

    delete n;
	std::cout << std::endl;
    return 0;
}