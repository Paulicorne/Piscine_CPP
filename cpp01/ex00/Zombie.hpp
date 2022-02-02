/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:17:58 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/02 14:09:29 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {
	public :
		Zombie(std::string name);
		~Zombie(void);
	
	void announce(void);
	Zombie* randomChump(void);
	
	private:
		std::string	_name;
};

void randomChump(std::string name);
Zombie* newZombie (std::string name);

#endif