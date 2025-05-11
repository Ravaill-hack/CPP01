/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:48:54 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 17:27:04 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadFile.hpp"
#include "WriteFile.hpp"

int	main(int argc, char **argv)
{
	ReadFile	inst_rf;
	WriteFile	inst_wf;
	if (argc != 4)
	{
		std::cerr << "There must be 3 inputs : ./src string_to_replace new_string" << std::endl;
	}
	else
	{
		inst_rf = ReadFile(argv[1]);
		inst_wf = WriteFile(argv[1], argv[2], argv[3]);
	}
	return (0);
}