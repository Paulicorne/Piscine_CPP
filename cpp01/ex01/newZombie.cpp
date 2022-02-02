/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:52:36 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/02 13:52:51 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *z = new Zombie(name); // creation de l'instance zombie en allocation dynamique avec new
	return(z);
}