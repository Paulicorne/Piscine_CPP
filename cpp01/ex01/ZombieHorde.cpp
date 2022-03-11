/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:42:08 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/24 10:32:19 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	std::cout << "Creating horde on the heap" << std::endl << std::endl;
	Zombie *horde = new Zombie[N];	// only 1 allocation via new[]
	
	for (int i=0; i < N; i++)
	{
		horde[i].setName(name);
	}	
	return(horde);					// returns pointer on 1st element of the array
}