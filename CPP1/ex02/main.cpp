#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << std::left << std::setw(41) << "The memory address of the string variable" << " = " << &str << std::endl;
	std::cout << std::left << std::setw(41) << "The memory address held by stringPTR" << " = " << stringPTR << std::endl;
	std::cout << std::left << std::setw(41) << "The memory address held by stringREF" << " = " << &stringREF << std::endl;
	std::cout << std::left << std::setw(41) << "The value of the string variable" << " = " << str << std::endl;
	std::cout << std::left << std::setw(41) << "The value pointed to by stringPTR" << " = " << *stringPTR << std::endl;
	std::cout << std::left << std::setw(41) << "The value pointed to by stringREF" << " = " << stringREF << std::endl;
	return (0);
}
