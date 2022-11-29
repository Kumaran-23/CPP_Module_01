/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedLoser.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:13:49 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:15:21 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedLoser.hpp"

std::string sed_replace(std::string filename, const std::string s1, const std::string s2)
{
	size_t	erase_s1 = s1.length();
	size_t	replace_s1 = s2.length();
	size_t	pos_s1 = 0;

	pos_s1 = filename.find(s1);//used to find the first occurrence of s1 in filename
	while (pos_s1 != std::string::npos)//npos means untill end of string 
	{
		filename.erase(pos_s1, erase_s1);//erases from pos_s1 position till s2 lenght
		filename.std::string::insert(pos_s1, s2);//inserts s2 starting from pos_s1
		pos_s1 = filename.find(s1, pos_s1 + replace_s1);
	}
	return (filename);
}