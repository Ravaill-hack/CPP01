
#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <iomanip>
# include <string.h>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB 		(std::string name);
		~HumanB 	();
		void		setWeapon(Weapon &weapon);
		void		attack() const;

	private:
		std::string	_name;
		Weapon		*_weapon;
	
};

#endif