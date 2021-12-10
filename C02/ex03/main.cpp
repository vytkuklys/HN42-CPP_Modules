/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:01:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/10 22:03:43 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main(void)
{
    std::cout << "When point is on the edge (floats):" << std::endl;
    Point a(5.25, 7);
    Point b(11.25, 1);
    Point c(5.25, 2);
    Point point(5.25, 3);
    if (a.bsp(a, b, c, point))
    {
        std::cout << "-Point is in the triangle: " << std::endl;
    }
    else
    {
        std::cout << "-Point is NOT in the triangle: " << std::endl;
    }
    
    std::cout << std::endl << "When point is 0.01 away from the edge inside triangle (floats):" << std::endl;
    Point a1(5.25, 7);
    Point b1(11.25, 1);
    Point c1(5.25, 2);
    Point point1(5.26, 3);
    if (a.bsp(a1, b1, c1, point1))
    {
        std::cout << "-Point is in the triangle: " << std::endl;
    }
    else
    {
        std::cout << "-Point is NOT in the triangle: " << std::endl;
    }

    std::cout << std::endl << "When point is inside triangle (int):" << std::endl;
    Point a3(7, 7);
    Point b3(11, 1);
    Point c3(2, 2);
    Point point3(7, 3);
    if (a.bsp(a3, b3, c3, point3))
    {
        std::cout << "-Point is in the triangle: " << std::endl;
    }
    else
    {
        std::cout << "-Point is NOT in the triangle: " << std::endl;
    }

    std::cout << std::endl << "When point is inside triangle (int -> assignment operator):" << std::endl;
    Point a4 = a3;
    Point b4 = b3;
    Point c4 = c3;
    Point point4 = point3;
    if (a.bsp(a4, b4, c4, point4))
    {
        std::cout << "-Point is in the triangle: " << std::endl;
    }
    else
    {
        std::cout << "-Point is NOT in the triangle: " << std::endl;
    }

    std::cout << std::endl << "When point is 0.01 away from the edge inside triangle (floats -> copy constructor):" << std::endl;
    Point a5(a1);
    Point b5(b1);
    Point c5(c1);
    Point point5(point1);
    if (a.bsp(a5, b5, c5, point5))
    {
        std::cout << "-Point is in the triangle: " << std::endl;
    }
    else
    {
        std::cout << "-Point is NOT in the triangle: " << std::endl;
    }

    std::cout << std::endl << "When point is 0.01 away from the edge inside triangle (floats -> copy constructor -> assignment operator):" << std::endl;
    Point a6(a5);
    Point b6(b5);
    Point c6(c5);
    Point point6(point5);
    if (a.bsp(a6, b6, c6, point6))
    {
        std::cout << "-Point is in the triangle: " << std::endl;
    }
    else
    {
        std::cout << "-Point is NOT in the triangle: " << std::endl;
    }
    std::cout << std::endl << "FOR REFERENCE: https://planetcalc.com/8108/" << std::endl;
    return 0;
}