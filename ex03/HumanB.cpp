/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:16:00 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:16:01 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//contsturctor for humanB initializing name and weapon type
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_type = NULL;
}

//destructor for HumanB
HumanB::~HumanB(void)
{
    std::cout << "HumanB destructor called" << std::endl;
}

//setting weapon type for humanB
void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}

//attack function for humanB showing name and weapon used
void	HumanB::attack(void)
{
	if (_type != NULL)
		std::cout << _name << " attacks with their " << _type->getType() << std::endl;
	else
		std::cout << _name << " attacks with their mind!" << std::endl;
}