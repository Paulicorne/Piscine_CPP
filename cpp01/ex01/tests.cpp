/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:44:56 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/02 15:28:45 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int nb_zomb = 2;
	Zombie *horde = zombieHorde(nb_zomb, "Michelle");
	
	for (int i = 0; i < nb_zomb; i++)
		horde[i].announce();
	//announce de chacun des zombies
	
	delete [] horde;
}