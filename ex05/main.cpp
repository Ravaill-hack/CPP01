/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:50:41 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 20:39:17 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl Harold;

	std::cout << "j'essaie avec Hello" << std::endl;
	Harold.complain("Hello");
	std::cout << "j'essaie avec INFO" << std::endl;
	Harold.complain("INFO");
	std::cout << "j'essaie avec ERROR" << std::endl;
	Harold.complain("ERROR");
	std::cout << "j'essaie avec DEBUG" << std::endl;
	Harold.complain("DEBUG");
	std::cout << "j'essaie avec WARNING" << std::endl;
	Harold.complain("WARNING");
}