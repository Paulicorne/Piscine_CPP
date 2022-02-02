/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:35:25 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/02 14:58:15 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Zombie.hpp"

int main(void)
{	
	std::string names[6] = {"ZOMB1", "ZOMB2", "ZOMB3", "ZOMB4", "ZOMB5", "ZOMB6"};

	srand(time(NULL) + clock());

	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
	Zombie* z =newZombie("Michel");
	z->announce();
	delete z;
}