#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap( const std::string& name );
		~ClapTrap();

		ClapTrap &	operator=( ClapTrap const & rhs );

		const std::string	getName(void) const;
		void				setName(const std::string& name);

		int					getHitPts(void) const;
		void				setHitPts(int const knock);

		int					getNrgPts(void) const;
		void				setNrgPts(int const energy);

		int					getDamage(void) const;
		void				setDamage(int const damage);


		void 				attack(const std::string& target);
		void 				takeDamage(unsigned int amount);
		void 				beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hitPts;
		int			_nrgPts;
		int			_damage;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */