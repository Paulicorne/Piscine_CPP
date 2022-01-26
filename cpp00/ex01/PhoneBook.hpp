

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP

#include <string>
#include <iostream>
#include <iomanip>

#include "Contact.hpp"

class phoneBook
{
private:
	Contact	contacts[8];
	int		amount;
public:
	phoneBook();
	virtual ~phoneBook();

	void	show_startup(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header(void);
};

#endif