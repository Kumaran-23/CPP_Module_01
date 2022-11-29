/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:18:54 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:18:55 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Creates a new zombie using new, returns its pointer
Zombie *newZombie(std::string name)
{
	Zombie *ret = new Zombie();
	ret->set_name(name);
	ret->announce();
	return ret;
}