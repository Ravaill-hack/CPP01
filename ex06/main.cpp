/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:43:05 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 20:48:53 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harold;

	if (argc != 2)
	{
		std::cerr << "Error : the usage is ./harlFilter <level>" << std::endl;
		std::cerr << "<level> can be \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"" << std::endl;
		return (1);
	}
	Harold.complain(argv[1]);
	return (0);
}
