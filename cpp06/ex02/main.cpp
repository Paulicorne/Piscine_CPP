#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <stdlib.h>
# include <time.h>
# include <iostream>
# include <string>

// crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur Base. Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire.
Base * generate(void)
{
	Base * ptr = NULL; // change this it was just to compile
	int rng;
	srand( time( NULL ) );
	rng = rand() % 3; // generates a random number between 0 and 2

	std::cout << rng;

	return (ptr); // change this as well
}

// affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
// void identify(Base* p)
// {}


// affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". 
//Utiliser un pointeur dans cette fonction est interdit.
// void identify(Base& p)
// {}


int	main(void)
{
	generate();
	return (0);
}