/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:12:29 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:12:31 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int main(int argc, char **argv) 
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "USAGE : ./harlFilter [level]" << std::endl;
		exit (1);
	}
	harl.filter(argv[1]);
}