
#ifndef READFILE_HPP
# define READFILE_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

class ReadFile
{
	public:
		ReadFile(std::string infile);
		~ReadFile(void);
		int				try_to_read (void);
		std::ifstream	&get_instream (void);
	
	private:
		std::string 	_infile;
		std::string 	_file_content;
		std::ifstream 	_instream;
};

#endif