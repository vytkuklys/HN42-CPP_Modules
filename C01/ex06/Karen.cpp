/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:50:50 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:26:46 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <map>

Karen::~Karen(void)
{
    std::cout << "Rest in peace, Karen" << std::endl;
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. \nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::karenFilter(std::string level)
{
    std::string complaint[4];
    int i = 0;

    complaint[0] = "DEBUG";
    complaint[1] = "INFO";
    complaint[2] = "WARNING";
    complaint[3] = "ERROR";

    while (i < 5 && level != complaint[i])
    {
        i++;
    }
    switch (i)
    {
    case 0:
        std::cout << "[ DEBUG ]" << std::endl;
        debug();
    case 1:
        std::cout << "[ INFO ]" << std::endl;
        info();
    case 2:
        std::cout << "[ WARNING ]" << std::endl;
        warning();
    case 3:
        std::cout << "[ ERROR ]" << std::endl;
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
