/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:28:25 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 17:59:38 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadFile.hpp"

ReadFile::ReadFile(std::string infile) : _infile(infile) {}

ReadFile::~ReadFile(void)
{
	_instream.close();
	if (_instream.fail())
		std::cerr << "Error, cannot close infile" << std::endl;
}

std::ifstream	&ReadFile::get_instream (void)
{
	return (&_instream);
}

int	ReadFile::try_to_read(void)
{
	_instream.open(_infile.c_str());
	if (!_instream)
		return (std::cerr << "Error, cannot open infile" << std::endl, 0);
	else
		return (1);
}

