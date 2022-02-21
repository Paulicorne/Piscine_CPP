#include <string>
#include <iostream>

#ifndef KAREN_HPP
#define KAREN_HPP

class Karen {
	private :
		int	level_int;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void filter( void );

	public :
		Karen(void);
		~Karen(void);
		void    complain( std::string level );
};

#endif