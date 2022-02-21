#include "Karen.hpp"

int	main(int ac, char** av)
{
	Karen karen;
	
	if(ac != 2)
	{
		std::cout<<"usage : ./karenFilter \"LEVEL_MSG\"";
		return(0);
	}
	karen.complain(av[1]);
}