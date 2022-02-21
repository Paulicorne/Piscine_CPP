/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:35:25 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/21 13:44:02 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Zombie.hpp"

int main(void)
{	
	std::string names[6] = {"Jean-Pierre", "Robert", "Constantin", "Zébulon", "Corentin", "Gérard"};
	srand(time(NULL) + clock());

	/* these ZOMB will be deleted automatically bc they're on the stack */
	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
	
	/* we need to delete those bc they're on the heap */
	Zombie* z = newZombie("Michel");
	z->announce();
	delete z;	// delete is the new free() !

	return(0);
}