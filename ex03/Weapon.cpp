/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 11:45:35 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/10 14:12:27 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon	(std::string type)
{
	_type = type;
}

Weapon::~Weapon	(){}

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
