/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:28:41 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 18:29:19 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WriteFile.hpp"

WriteFile::WriteFile(std::string infile, std::string str_to_rep, std::string new_str) : _string_to_replace(str_to_rep), _new_string(new_str)
{
	_outfile = infile.append(".replace");
}

WriteFile::~WriteFile()
{
	if (outstream.is_open())
	{
		outstream.close();
		if (outstream.fail())
			std::cerr << "Error, cannot close outfile" << std::endl;
	}
}

int	WriteFile::try_to_write(std::ifstream &instream)
{
	if (!_check_outfile())
		return (0);
	_fill_outfile(instream);
	return (1);
}

int	WriteFile::_check_outfile(void)
{
	outstream.open(_outfile.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!outstream)
		return (std::cerr << "Error, cannot open outfile" << std::endl, 0);
	return (1);
}

std::string	WriteFile::_get_replaced_line(std::string line) const
{
	int			old_i = 0;
	int			new_i = line.find(_string_to_replace, old_i);
	std::string	new_line;

	if (new_i == -1)
		return (line);
	while (new_i != -1)
	{
		new_line.append(line, old_i, new_i - old_i);
		new_line.append(_new_string);
		new_i += (int)_string_to_replace.length();
		old_i = new_i;
		new_i = line.find(_string_to_replace, old_i);
	}
	if (old_i < (int)line.length())
		new_line.append(line, old_i, line.length() - old_i);
	return (new_line);
}

void	WriteFile::_fill_outfile(std::ifstream &instream)
{
	std::string	new_line;
	std::string	curr_line;

	while (std::getline(instream, curr_line))
	{
		new_line = _get_replaced_line(curr_line);
		outstream << new_line << std::endl;
	}
}