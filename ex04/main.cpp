/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:14:21 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:15:33 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include "SedLoser.hpp"

int main(int argc, char **argv)
{
	std::ifstream read_file;
	std::stringstream buffer;
	std::string	file;
	std::ofstream out_file;
	if (argc != 4)
	{
		std::cout << "Format: ./sed <filename> <string_to_replace> <string_replaced]" << std::endl;
		exit(1);
	}
	//opens file and checks if it opens properly
	read_file.open(argv[1]);
	if (read_file.is_open() == false)
	{
		std::cout << "Error file could not be opened" << std::endl;
		exit(1);
	}
	//checks to make sure file is not empty
	if (read_file.peek() == EOF)
	{
		std::cout << "Error file is empty" << std::endl;
		exit(1);
	}
	//reads file into a buffer
	//rdbuf directs stream from read_file to buffer
	//str() return a copy of buffer as a string
	buffer << read_file.rdbuf();
	read_file.close();
	file = buffer.str();
	//calls the replace fuction on the file 
	file = sed_replace(file, argv[2], argv[3]);
	//writes the changes into the .replace file
	out_file.open(argv[1] + (std::string)".replace");
  	out_file << file;
  	out_file.close();
	return (0);
}