/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 11:45:21 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/10 12:36:42 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
