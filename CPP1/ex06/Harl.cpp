#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-";
	std::cout << "special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int			i;
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
		if (level == options[i])
			break ;
	switch (i)
	{
		case 0:	std::cout << "[ DEBUG ]" << std::endl;
				this->debug();
				std::cout << std::endl;
		case 1:	std::cout << "[ INFO ]" << std::endl;
				this->info();
				std::cout << std::endl;
		case 2:	std::cout << "[ WARNING ]" << std::endl;
				this->warning();
				std::cout << std::endl;
		case 3:	std::cout << "[ ERROR ]" << std::endl;
				this->error();
				std::cout << std::endl;
				break ;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
