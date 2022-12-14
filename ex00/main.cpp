/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:19:01 by snair             #+#    #+#             */
/*   Updated: 2022/12/11 18:37:42 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) 
{
  
    Zombie a;
	a.set_name("Mob");
	a.announce();
  	Zombie *b = newZombie("Bob");
	b->announce();
	randomChump("Cob");
	delete b;
  	return (0);
}
