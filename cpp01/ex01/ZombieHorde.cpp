/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:42:08 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/02 15:17:53 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	
	for (int i=0; i < N; i++)
		horde[i].setName(name);
	return(horde);
}