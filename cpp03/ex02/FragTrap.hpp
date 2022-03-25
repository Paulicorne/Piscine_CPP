#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		// FragTrap();
		// FragTrap( FragTrap const & src );
		FragTrap( const std::string& name );
		~FragTrap();

		// FragTrap &		operator=( FragTrap const & rhs );
		
		void highFivesGuys(void);
		void attack(const std::string& target);

	private:

		// std::string	_name;
		// int			_hitPts;
		// int			_nrgPts;
		// int			_damage;

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */