/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <milletp.pro@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:30:37 by pmillet           #+#    #+#             */
/*   Updated: 2022/02/15 11:22:23 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
	bool status = true;
	std::string command;
	phoneBook book;
	int i;
	i = 0;

	book.show_startup();
	while(status)
	{
        std::cout << ">";
		std::getline(std::cin, command);
		if(command == "EXIT")
		{
			std::cout<<"see you soon !"<<std::endl;
			return(0);
		}
		if(!command.compare("ADD"))
		{
			if(i != 8)
			{
				book.add_contact();
                i++;
			}
			else
				std::cout<<"contact full !"<<std::endl;
		}
		if(!command.compare("SEARCH"))
			book.search_contact();
    }
}