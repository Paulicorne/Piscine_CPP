/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:18:07 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/21 13:45:32 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is DEAD" << std::endl; // debug message with the name of the destructed zombie
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}