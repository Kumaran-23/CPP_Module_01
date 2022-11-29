/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:17:48 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:17:49 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//constructor for Zombie class
Zombie::Zombie()
{
	std::cout << "A new zombie has been constructed" << std::endl;
}

//destuctor for Zombie class
Zombie::~Zombie(void)
{
	std::cout << _name << " has been destucted" << std::endl;
}

//setting the class member _name
void	Zombie::set_name(std::string name)
{
	this->_name = name;
	std::cout << "Zombie  has been named: " << name << std::endl;
}

//getting the class member _name that is currently set
std::string	Zombie::get_name(void)const
{
	return(this->_name);
}

//announces the zombie created along with its name
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}