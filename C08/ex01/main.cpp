/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:24:32 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/25 23:48:19 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(10000);
    sp.addNumber(MAX_INT);
    sp.addNumbers(2000, 0);
    sp.addNumbers(2000, 20);
    sp.addNumbers(2000, 30);
    sp.addNumbers(2000, 40);
    sp.addNumbers(1999, MIN_INT);
    std::cout << "Shortest span :  " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span  :  " << sp.longestSpan() << std::endl;

    Span sp_exceptions(2);
    sp_exceptions.addNumber(1);
    try
    {
        std::cout << "Shortest span with only one value :  " << sp_exceptions.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Longest span with only one value  :  " << sp_exceptions.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Add 2 extra numbers with only 1 slot left: ";
        sp_exceptions.addNumbers(2, 2);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Add second number: \n";
        sp_exceptions.addNumber(4);
        std::cout << "Add third number : ";
        sp_exceptions.addNumber(6);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}