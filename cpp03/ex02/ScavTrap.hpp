#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		// ScavTrap();
		// ScavTrap( ScavTrap const & src );
		ScavTrap( const std::string& name );

		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
		ScavTrap &		operator=( ScavTrap const & rhs );
		ScavTrap &		operator=( ClapTrap const & rhs );

	private: // "public" inheritance doesn't pass private attributes & functions

		// std::string	_name;
		// int			_hitPts;
		// int			_nrgPts;
		// int			_damage;
};

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */