/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 11:45:28 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/12 11:16:44 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB 	(std::string name)
{
	_weapon = NULL;
	_name = name;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << _name << "attacks";
	if (_weapon != NULL)
	{
		std::cout << " with their " << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << " with no weapon" << std::endl;
	}
}
