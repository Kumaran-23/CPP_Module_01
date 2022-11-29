#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
			std::string	_type;
	public:
			Weapon();
			~Weapon();
			Weapon(std::string type);
			void    setType(std::string type);
			std::string	getType(void);
			void		attack(void);
};

#endif