
#include <iostream>
#include <iomanip>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string has the address: " << &string << std::endl;
	std::cout << "stringPTR contains the address: " << stringPTR << std::endl;
	std::cout << "stringREF has the address: " << &stringREF << std::endl;
	std::cout << "string value is: " << string << std::endl;
	std::cout << "stringPTR points to string: " << *stringPTR << std::endl;
	std::cout << "stringREF value is: " << stringREF << std::endl;

	return (0);
}