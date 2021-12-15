/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:47:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/13 21:18:40 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << std::endl
                  << "Too low grade passed as an argument to the constructor:" << std::endl;
        Bureaucrat test("Rud", 151);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << std::endl
                  << "Too high grade passed as an argument to the constructor:" << std::endl;
        Bureaucrat test2("Hut", 0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << std::endl
                  << "Trying to decrement value that is too low:" << std::endl;
        Bureaucrat test3("Chulli", 150);
        std::cout << test3-- << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << std::endl
                  << "Trying to increment value that is too high:" << std::endl;
        Bureaucrat test4("Puppers", 2);
        std::cout << "Grade: " << test4 << std::endl;
        std::cout << "++Grade: " << ++test4 << std::endl;
        std::cout << "Grade++ (1): " << test4++ << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}