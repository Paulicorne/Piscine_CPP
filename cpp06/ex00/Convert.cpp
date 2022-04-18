#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
}

Convert::Convert( const Convert & src )
{
}

Convert::Convert(char *str) : _str(str), _dot(false), _only0(false)
{
	// checking if input is a single char
	std::string s(this->_str);
	if (s.length() == 1 && (s[0] > '9' || s[0] < '0' ))//std::string length() returns nb of CharT in str. Then we check if the char is not a number.
		this->_val = static_cast<double>(s[0]);
	else
		this->_val = std::atof(this->_str); // using ascii to float func

	char * dot = strchr(str, '.');	// returns pointer to '.' char if found in str, or null.
	if (dot)
	{
		this->_dot = true;
		this->_only0 = true;
	}

	int i = 1;
	while (dot && dot[i] != 0 && this->_only0 == true)
	{
		if (dot[i] != '0')
			this->_only0 = false;
		i++;
	}
	if (dot && dot[i] == 0 && dot[i - 1] == 'f')
		this->_only0 = true;
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->_val = rhs._val;
		this->_str = rhs._str;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Convert const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

float	Convert::toFloat()
{
	return(static_cast<int>(this->_val));
}

int	Convert::toInt()
{
	return(static_cast<float>(this->_val));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char*	Convert::getStr()
{
	return(this->_str);
}

double	Convert::getValue()
{
	return(this->_val);
}

/* ************************************************************************** */