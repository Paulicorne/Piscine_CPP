#include "Convert.hpp"
#include <cctype>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
}

Convert::Convert( const Convert & src ) : _str(src._str), _dot(src._dot), _only0(src._only0)
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

	char * dot = std::strchr(str, '.');	// returns pointer to '.' char if found in str, or null.
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

/*
** --------------------------------- METHODS ----------------------------------
*/

float	Convert::toFloat()
{
	return(static_cast<float>(this->_val));
}

int		Convert::toInt()
{
	return(static_cast<int>(this->_val));
}

char	Convert::toChar()
{
	std::string	str(this->_str);
	if (isalpha(this->_str[0]) && str.length() == 1) // is it already a char ?
		return(static_cast<char>(this->_str[0]));
	else
		return (static_cast<char>(this->_val));
}

void	Convert::printConv()
{
	std::string	str(this->_str);
	char	c = this->toChar();
	int		i = this->toInt();
	float	f = this->toFloat();
	double	d = this->_val;

	bool	is_nan =(str.compare("nan") == 0) ? true : false;
	bool	is_inf =(str.compare("inf") == 0) ? true : false;

	/*	CHAR	*/
	std::cout << "char: ";
	if (is_nan || is_inf)
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;

	/*	INT	*/
	std::cout << "int: ";
	if (is_nan || is_inf)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;

	/*	FLOAT	*/
	std::cout << "float: ";
	if (is_nan)
		std::cout << "nan";
	else if (is_inf && d > 0)
		std::cout << "+inf";
	else if (is_inf && d < 0)
		std::cout << "-inf";
	else 
		std::cout << f;
	if (!is_nan && !is_inf && ((this->_dot == true && this->_only0 == true) || this->_dot == false))
		std::cout << ".0";
	std::cout << "f" << std::endl;

	/*	DOUBLE	*/
	std::cout << "double: ";
	if (is_nan)
		std::cout << "nan";
	else if (is_inf && d > 0)
		std::cout << "+inf";
	else if (is_inf && d < 0)
		std::cout << "-inf";
	else 
		std::cout << d;
	if (is_inf == false && is_nan == false && ((this->_dot == true && this->_only0 == true) || this->_dot == false))
		std::cout << ".0";
	std::cout << std::endl;

	return;
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