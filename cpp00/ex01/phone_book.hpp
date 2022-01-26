/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillet <pmillet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:39:03 by pmillet           #+#    #+#             */
/*   Updated: 2022/01/26 11:34:18 by pmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

class contact
{
	public :
		void print_attribute() const;
		void set_attribute();
		std::string show_contact() const;
		
		std::string get_first_name() const; 
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;

	private :

		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

class phoneBook
{
private:
	contact	contacts[8];
	int		amount;
public:
	phoneBook();
	virtual ~phoneBook();

	void	show_startup(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header(void);
};