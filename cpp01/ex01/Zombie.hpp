/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:17:58 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/02 15:20:30 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {
	public :
		Zombie(void);
		~Zombie(void);
	
	void announce(void);
	void setName(std::string name);
	Zombie* randomChump(void);
	
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif