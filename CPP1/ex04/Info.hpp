#ifndef INFO_HPP
# define INFO_HPP

#include <iostream>
#include <fstream>

class Info
{
	public:
		Info(char **argv);
		~Info();
		void	job(void);
	private:
		std::string	_inFile;
		std::string	_outFile;
		std::string _find;
		std::string _replace;
		std::string _str;
};

#endif
