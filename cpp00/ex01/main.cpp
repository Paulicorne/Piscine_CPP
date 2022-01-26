/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <pmillet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:30:37 by pmillet           #+#    #+#             */
/*   Updated: 2022/01/26 12:24:46 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main ()
{
	bool status = true;
	std::string get_string;
    // create contact ?.. 
	phoneBook book;
	int i;
	i = 0;

	while(status)
	{
        std::cin>>get_string;
		if(get_string == "EXIT")
		{
			std::cout<<"see you soon !"<<std::endl;
			return(0);
		}
		if(!get_string.compare("ADD"))
		{
			if(i != 8)
			{
				// list[i].set_attribute();
				book.add_contact();
                i++;
			}
			else
				std::cout<<"contact full !"<<std::endl;
		}
		if(!get_string.compare("SEARCH"))
			book.search_contact();
            // function_search(list, i );
    }
}