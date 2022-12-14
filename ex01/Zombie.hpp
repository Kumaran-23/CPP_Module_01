/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:17:41 by snair             #+#    #+#             */
/*   Updated: 2022/12/08 20:44:55 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie 
{
	private:
			std::string _name;
	public:
			Zombie();
			~Zombie();
			std::string get_name() const;
			void set_name(std::string name);
			void announce();
};

Zombie *zombieHorde(int N, std::string name);
#endif