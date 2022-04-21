#include "Whatever.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Whatever::Whatever()
{
}

Whatever::Whatever( const Whatever & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Whatever::~Whatever()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Whatever &				Whatever::operator=( Whatever const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Whatever const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */