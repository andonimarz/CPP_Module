#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;
	std::cout << std::left << std::setw(41)
		<< "The memory address of the string variable" << " = " << &str << std::endl;
	std::cout << std::left << std::setw(41)
		<< "The memory address held by strPTR" << " = " << strPTR << std::endl;
	std::cout << std::left << std::setw(41)
		<< "The memory address held by strREF" << " = " << &strREF << std::endl;
	std::cout << std::left << std::setw(41)
		<< "The value of the string variable" << " = " << str << std::endl;
	std::cout << std::left << std::setw(41)
		<< "The value pointed to by strPTR" << " = " << *strPTR << std::endl;
	std::cout << std::left << std::setw(41)
		<< "The value pointed to by strREF" << " = " << strREF << std::endl;
	return (0);
}
