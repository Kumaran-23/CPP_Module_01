/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:17:33 by snair             #+#    #+#             */
/*   Updated: 2022/12/08 20:43:45 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//allocates N number of zombies all at once, sets their names and announces them
Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie *zh = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zh[i].set_name(name);
		zh[i].announce();
	}
	return (zh);
}
