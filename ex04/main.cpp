/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:48:54 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 17:58:44 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadFile.hpp"
#include "WriteFile.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "There must be 3 inputs : ./src string_to_replace new_string" << std::endl;
		return (1);
	}
	ReadFile	inst_rf = ReadFile(argv[1]);
	WriteFile	inst_wf = WriteFile(argv[1], argv[2], argv[3]);
	if (!inst_rf.try_to_read() || !inst_wf.try_to_write(inst_rf.get_instream()))
		return (1);
	return (0);
}