/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:19:01 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:19:02 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie;
	Zombie	*zombies;

	zombie.set_name("Foo");
	zombie.announce();
	zombies = newZombie("Boo");
	randomChump("Moo");
	delete zombies;
	return (0);
}