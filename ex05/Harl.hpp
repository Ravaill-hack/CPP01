
#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>

# define MSGDEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define MSGINFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define MSGWARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
# define MSGERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void		complain(std::string level) const;

	private:
		void		debug(void) const;
		void		info(void) const;
		void		warning(void) const;
		void		error(void) const;
		std::string _complain_levels[4];
		void		(Harl::*_complain_functions[4])(void) const;

};

#endif