/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:07:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:54:14 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("Tetris");

    test.attack("Puzzle");
    test.takeDamage(5);
    test.beRepaired(2);

    std::cout << std::endl;
    // ClapTrap test2 = test; //assignment operator
    // ClapTrap test2; //default constructor
    // ClapTrap test2(test); // copy constructor

    // test2.attack("Puzzle");
    // test2.takeDamage(5);
    // test2.beRepaired(5);

    return (0);
}