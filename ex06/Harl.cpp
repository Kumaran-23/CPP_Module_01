/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:12:22 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:12:23 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//constructor for Harl class
Harl::Harl()
{

}

//destructor for Harl class
Harl::~Harl()
{
	std::cout << "destructor for Harl called" << std::endl;
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
    << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
    "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. "
    "I’ve been coming for years whereas you started working here since last month."
    << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

//calls the needed function using pointers, depending on what level is called
void Harl::complain(std::string level)
{
    void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4; i++)
    {
        if (level == level_list[i]) 
        {
            (this->*functions[i])();
            break;
        }
    }
    if (i == 4)
        std::cout << "No match for any levels" << std::endl;
}


void	Harl::filter(std::string level)
{
	int	i;
	std::string level_list[] = {
		"ERROR",
		"WARNING",
		"INFO",
		"DEBUG"
	};

	i = -1;
	while (++i < 4)
	{
        if (level == level_list[i]) 
            break;
    }
	switch (i)
	{
		case 3:
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
            std::cout << std::endl;
			//fall through
		case 2:
            std::cout << "[ INFO ]" << std::endl;
            info();
            std::cout << std::endl;
			//fall through
		case 1:
            std::cout << "[ WARNING ]" << std::endl;
            warning();
            std::cout << std::endl;
			//fall through
		case 0:
            std::cout << "[ ERROR ]" << std::endl;
            error();
            std::cout << std::endl;
            break;
	  default:
	  	std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
}