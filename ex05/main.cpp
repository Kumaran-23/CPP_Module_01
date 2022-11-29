/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:13:05 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:13:10 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) 
{
	Harl harl;

	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("LEVEL");
    return (0);
}