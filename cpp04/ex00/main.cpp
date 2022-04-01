# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    /* TESTS FROM SUBJECT */

    /* ANIMAL */
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;


    /* EXTENDED TESTS : WRONGANIMAL */

    const WrongAnimal* w_meta = new WrongAnimal();
    const WrongAnimal* w_i = new WrongCat();
    std::cout << std::endl;
    std::cout << w_i->getType() << " " << std::endl;
    std::cout << w_meta->getType() << " " << std::endl;
    w_i->makeSound(); //will NOT output the cat sound!
    w_meta->makeSound();

    std::cout << std::endl;

    /* WHAT IF WE CREATE A WRONGCAT DIRECTLY ? */
    /* We don't need "virtual" with these initializations to make the right call to the right function.
    /* But you never know how you'll need to create your instances in your code */
    /* => It's better to take the habit to put "virtual" on parent classes !*/
    
    Animal animal;
    Cat cat;
    WrongAnimal wrong_animal;
    WrongCat wrong_cat;

    animal.makeSound();
    cat.makeSound();
    std::cout << std::endl;

    wrong_animal.makeSound();
    wrong_cat.makeSound();      // will output WrongCat's noise bc we declared it as a WrongCat
    std::cout << std::endl;


    /* To do this, we had to make destructors virtual too 
    (otherwise you just free the wrong thing, thus get an abort when running program) */

    delete (j);
    delete (i);
    delete (meta);

    delete (w_i);
    delete (w_meta);

    return 0;
}