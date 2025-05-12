/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:48:54 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/12 11:19:31 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadFile.hpp"
#include "WriteFile.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "There must be 3 inputs : <file> <string_to_replace> <new_string>" << std::endl;
		return (1);
	}
	if (argv[2] == "")
	{
		std::cerr << "Second input cannot be an empty string" << std::endl;
		return (1);
	}
	ReadFile	inst_rf(argv[1]);
	WriteFile	inst_wf(argv[1], argv[2], argv[3]);
	if (!inst_rf.try_to_read() || !inst_wf.try_to_write(inst_rf.instream))
		return (1);
	return (0);
}