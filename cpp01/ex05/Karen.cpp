#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void	Karen::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
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
	void (Karen::*ptr_complain[4]) (void) = { // array of pointers on methods (our funcitons) 
			&Karen::debug,
			&Karen::info,
			&Karen::warning,
			&Karen::error,
		};

	for(int i = 0; i != 4; i++)
	{
		if(level == complaint_level[i])	// identifies if the level parameter passed matches Karen's levels
			(this->*ptr_complain[i])(); // calls the corresponding method, stored in the array we just created above
  	}
}