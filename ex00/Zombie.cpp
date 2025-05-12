/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:17:13 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/12 11:17:16 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie (std::string name)
{
	_name = name;
	std::cout << name << " has been created." << std::endl;
}
	
Zombie::~Zombie (void)
{
	std::cout << _name << " has been destroyed." << std::endl;
}

void	Zombie::announce (void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
