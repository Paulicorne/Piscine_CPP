#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &	operator=( ClapTrap const & rhs );

		int			getName;
		int			setName;

		int			getHitPts;
		int			setHitPts;

		int			getNrgPts;
		int			setNrgPts;
		
		int			getDamage;
		int			setDamage;


		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hitPts = 10;
		int			_nrgPts = 10;
		int			_damage = 0;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */