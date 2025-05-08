
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <string>
# include <iostream>

class Zombie
{
	public:
		static 	std::string nameList[10];
		Zombie (void);
		~Zombie (void);
		void	announce (void);
		Zombie* newZombie (std::string name);
		void	randomChump (std::string name);

	private:
		std::string	name;

};

#endif