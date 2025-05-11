/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:51:16 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 19:41:03 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_complain_levels[0] = "DEBUG";
	_complain_levels[1] = "INFO";
	_complain_levels[2] = "WARNING";
	_complain_levels[3] =  "ERROR";
	_complain_functions[0] = &Harl::debug;
	_complain_functions[1] = &Harl::info;
	_complain_functions[2] = &Harl::warning;
	_complain_functions[3] = &Harl::error;
}

Harl::~Harl(void){}

void	Harl::complain(std::string level) const
{
	int	i = 0;

	while (i < 4)
	{
		if (level == _complain_levels[i])
		{
			(this->*_complain_functions[i])();
			return;
		}
		i++;
	}
	std::cerr << "Error: the level does not exist" << std::endl;
}

void	Harl::debug(void) const
{
	std::cerr << MSGDEBUG << std::endl;
}

void	Harl::info(void) const
{
	std::cerr << MSGINFO << std::endl;
}

void	Harl::warning(void) const
{
	std::cerr << MSGWARNING << std::endl;
}

void	Harl::error(void) const
{
	std::cerr << MSGERROR << std::endl;
}
