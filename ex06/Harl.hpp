/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:12:10 by snair             #+#    #+#             */
/*   Updated: 2022/11/29 13:12:13 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class Harl
{
    private:
            void debug();
            void info();
            void warning();
            void error();
    public:
            Harl();
            ~Harl();
            void complain(std::string level);
            void filter(std::string level);
};

#endif