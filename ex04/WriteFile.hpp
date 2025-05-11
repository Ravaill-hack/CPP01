
#ifndef WRITEFILE_HPP
# define WRITEFILE_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

class WriteFile
{
	public:
		WriteFile(std::string outfile, std::string str_to_rep, std::string new_str);
		~WriteFile(void);
		int 			try_to_write(std::ifstream &instream);
		std::ofstream 	outstream;

	private:
		int				_check_outfile(void);
		void			_fill_outfile(std::ifstream &instream);
		std::string		_get_replaced_line(std::string line) const;
		std::string 	_string_to_replace;
		std::string 	_new_string;
		std::string 	_outfile;
};

#endif