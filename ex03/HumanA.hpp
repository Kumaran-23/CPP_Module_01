/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:15:55 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:15:56 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
    private:
		    std::string	_name;
		    Weapon		&_type;
	public:
		    HumanA(std::string name, Weapon &type);
		    ~HumanA();
		    void	attack();
};

#endif