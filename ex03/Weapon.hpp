
#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <iomanip>
# include <string.h>

class Weapon
{
	public:
		Weapon		(std::string type);
		~Weapon		();
		std::string	getType();
		void		setType(std::string newType);

	private:
		std::string	_type;
};

#endif