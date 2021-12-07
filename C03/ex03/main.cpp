/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:07:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 20:25:28 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap t1("Eu");
    t1.attack("reka");
    std::cout << "\n";
    ScavTrap t2("Creed");
    t2.guardGate();
    t2.attack("Bratton");
    std::cout << "\n";
    FragTrap test("Michael Scott");

    test.highFivesGuys();
    return (0);
}