/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:15:46 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:15:47 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructor for HumanA initiallizing name and weapon type
HumanA::HumanA(std::string name, Weapon &type) :_name(name), _type(type)
{

}

//destructor for HumanA
HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}

//attack function showing name and weapon used by humanA
void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _type.getType() << std::endl;
}