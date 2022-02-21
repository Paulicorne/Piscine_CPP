/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:17:58 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/21 13:32:03 by pmillet          ###   ########.fr       */
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
	
	private:
		std::string	_name;
};

Zombie* newZombie (std::string name);	// creates & returns a zombie we can use.
void randomChump(std::string name);		// creates a Zombie that can't be used outside of this function.

#endif