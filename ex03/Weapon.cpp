#include "Weapon.hpp"

//
Weapon::Weapon()
{

}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor called" << std::endl;
}

//constructor with certain weapon type
Weapon::Weapon(std::string type)
{
    this->_type = type;
}

//setting weapon type
void    Weapon::setType(std::string type)
{
    this->_type = type;
}

//to get type of weapon
std::string Weapon::getType(void)
{
    return(this->_type);
}
