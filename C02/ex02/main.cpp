/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:01:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/11 14:22:19 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c = a;
    Fixed d = c;
    std::cout << "a: " << a << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "max: " << Fixed::max(a, b) << std::endl;
    std::cout << "min: " << Fixed::min(c, a) << std::endl;
    if (a != c)
    {
        std::cout << "a != c" << std::endl;
    }
    if (a >= c)
    {
        std::cout << "a >= c" << std::endl;
    }
    if (c <= b)
    {
        std::cout << "c <= b" << std::endl;
    }
    if (c == d)
    {
        std::cout << "c == d" << std::endl;
    }
    std::cout << a << " + " << c << " = " << a + c << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << c << " * " << b << " = " << c * b << std::endl;
    std::cout << b << " / " << a << " = " << b / a << std::endl;
    return 0;
}