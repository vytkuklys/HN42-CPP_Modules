/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:07:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:41:39 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap test("Tetris");
    test.attack("Puzzle");
    test.guardGate();
    test.takeDamage(5);
    test.beRepaired(5);
    
    std::cout << std::endl;
    // ScavTrap test2 = test; //assignment operator
    // ScavTrap test2; //default constructor
    // ScavTrap test2(test); // copy constructor
    // test2.attack("Puzzle");
    // test2.takeDamage(5);
    // test2.beRepaired(5);
    // test2.guardGate();
    return (0);
}