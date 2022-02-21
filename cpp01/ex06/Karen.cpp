#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Karen::filter( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Karen::Karen(void)
{
	this->level_int = -1;
}

Karen::~Karen(void)
{
}

void	Karen::complain( std::string level )
{
	std::string complaint_level[4] = 
		{
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};

	for(int i = 0; i != 4; i++)
	{
		if(level == complaint_level[i])	// identifies if the level parameter passed matches Karen's levels
		{
			this->level_int = i; // calls the corresponding method and higher level ones, stored in the array we just created above
			break;
		}
  	}
	switch (this->level_int)
		{

			case 0 :
				this->Karen::debug();
				std::cout << std::endl;

			case 1 :
			{
				this->Karen::info();
				std::cout << std::endl;
			}

			case 2 :
			{
				this->Karen::warning();
				std::cout << std::endl;
			}

			case 3 :
			{
				this->Karen::error();
				std::cout << std::endl;
					break;
			}
			default :
				this->Karen::filter();
		}
}