#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType(void);
		void				setType(std::string str);
	private:
		std::string	_type;
};

#endif
