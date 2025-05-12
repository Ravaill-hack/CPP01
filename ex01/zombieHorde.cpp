/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:17:47 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/12 11:17:50 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde (int N, std::string name)
{
	Zombie* horde;
	int		i;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		std::stringstream	s;
		s << i;
		horde[i].setName(name + s.str());
		i++;
	}
	return (horde);
}
