/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:44:56 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/21 14:56:00 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int nb_zomb = 7;
	Zombie *horde = zombieHorde(nb_zomb, "Michelle");
	
	for (int i = 0; i < nb_zomb; i++)
	{
		std::cout << "Zombie number [" << i << "] announces itself :" << std::endl;
		horde[i].announce();
		std::cout << std::endl;
	}
	delete [] horde;		// this is the syntax to delete an array.
}

// leaks -atExit -- ./zombie // to check leaks ;)