# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	    /* TESTS FROM SUBJECT */

    /* ANIMAL */
    //const AAnimal* meta = new AAnimal(); // This can't compile, bc oublic functions are all pure virtual

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    //meta->makeSound();
    
    std::cout << std::endl;

	delete (j);
    delete (i);
    //delete (meta);

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
}