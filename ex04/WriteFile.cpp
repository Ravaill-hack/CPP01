/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:28:41 by Lmatkows          #+#    #+#             */
/*   Updated: 2025/05/11 17:18:21 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WriteFile.hpp"

WriteFile::WriteFile(std::string outfile, std::string str_to_rep, std::string new_str):_outfile(outfile), _string_to_replace(str_to_rep), _new_string(new_str) {}

WriteFile::~WriteFile()
{
	_outstream.close();
	if (_outstream.fail())
		std::cerr << "Error, cannot close outfile" << std::endl;
}

int	WriteFile::_check_outfile(void) const
{
	_outstream.open(_outfile.c_str());
	if (!_outstream)
		return (std::cerr << "Error, cannot open outfile" << std::endl, 0);
	else
		return (1);
}

std::string	WriteFile::_get_replaced_line(std::string line)
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

int	WriteFile::fill_outfile(std::ifstream &instream)
{
	std::string	new_line;
	std::string	curr_line;

	while (std::getline(instream, curr_line))
	{
		_new_line = _get_replaced_line(curr_line);
		_outstream << new_line << std::endl;
	}
}