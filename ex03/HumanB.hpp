/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:16:07 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:16:29 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
		    std::string	_name;
		    Weapon		*_type;
	public:
		    HumanB(std::string name);
		    ~HumanB();
		    void	setWeapon(Weapon &type);
		    void	attack();
};

#endif