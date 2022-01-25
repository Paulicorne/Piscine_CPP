/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <pmillet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:52:01 by pmillet           #+#    #+#             */
/*   Updated: 2022/01/25 13:46:45 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main    (int argc, char **argv)
{
    if (argc > 1)
    {
        int i;
        int j;
        i = 1;
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout <<std::endl;
}