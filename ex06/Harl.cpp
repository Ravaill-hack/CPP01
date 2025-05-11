/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:51:16 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 21:09:04 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_complain_levels[0] = "DEBUG";
	_complain_levels[1] = "INFO";
	_complain_levels[2] = "WARNING";
	_complain_levels[3] =  "ERROR";
}

Harl::~Harl(void){}

void	Harl::debug(void) const
{
	std::cerr << "[ DEBUG ]" << std::endl;
	std::cerr << MSGDEBUG << std::endl;
}

void	Harl::info(void) const
{
	std::cerr << "[ INFO ]" << std::endl;
	std::cerr << MSGINFO << std::endl;
}

void	Harl::warning(void) const
{
	std::cerr << "[ WARNING ]" << std::endl;
	std::cerr << MSGWARNING << std::endl;
}

void	Harl::error(void) const
{
	std::cerr << "[ ERROR ]" << std::endl;
	std::cerr << MSGERROR << std::endl;
}

void	Harl::complain(std::string level) const
{
	int	i = 0;

	while (i < 4)
	{
		if (level == _complain_levels[i])
		{
			while (i < 4)
			{
				switch (i)
				{
					case 0:
						Harl::debug();
						break;
					case 1:
						Harl::info();
						break;
					case 2:
						Harl::warning();
						break;
					case 3:
						Harl::error();
						break;
				}
				i++;
			}
			return;	
		}
		i++;
	}
	std::cerr << MSGDEFAULT << std::endl;
}
