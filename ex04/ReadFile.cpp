/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:28:25 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 18:47:39 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadFile.hpp"

ReadFile::ReadFile(std::string infile) : _infile(infile) {}

ReadFile::~ReadFile(void)
{
	if (instream.is_open())
	{
		instream.clear();
		instream.close();
		if (instream.fail())
			std::cerr << "Error, cannot close infile" << std::endl;
	}
}

int	ReadFile::try_to_read(void)
{
	instream.open(_infile.c_str());
	if (!instream)
		return (std::cerr << "Error, cannot open infile" << std::endl, 0);
	else
		return (1);
}

