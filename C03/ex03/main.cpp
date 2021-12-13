/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:07:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:35:28 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap test("Al");

    std::cout << std::endl;
    test.whoAmI();
    test.attack("Bundy");
    test.highFivesGuys();
    test.guardGate();
    test.printDiamondStats();
    std::cout << std::endl;

    // DiamondTrap test2(test);
    // DiamondTrap test2;
    // test2 = test;
    // test2.whoAmI();
    // test2.attack("Bundy");
    // test2.highFivesGuys();
    // test2.guardGate();
    // test2.printDiamondStats();
    // std::cout << std::endl;
    return (0);
}