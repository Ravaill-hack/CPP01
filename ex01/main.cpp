/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:17:31 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/12 11:17:33 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;
	int	N;
	Zombie* Horde_Of_Zombies;
	
	i = 0;
	N = 7;
	Horde_Of_Zombies = zombieHorde(7, "Horde_Zombie_");
	while (i < N)
	{
		Horde_Of_Zombies[i].announce();
		i++;
	}
	delete[] (Horde_Of_Zombies);
	return (0);
}
