/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:07:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:12:15 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap test("Tetris");
    test.attack("Puzzle");
    test.takeDamage(5);
    test.beRepaired(5);
    test.highFivesGuys();

    std::cout << std::endl;
    // FragTrap test2 = test;
    // FragTrap test2;
    // FragTrap test2(test);
    // test2.attack("Puzzle");
    // test2.takeDamage(5);
    // test2.beRepaired(5);
    // test2.highFivesGuys();
    return (0);
}