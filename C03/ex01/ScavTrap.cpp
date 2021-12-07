/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:04:55 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 20:04:46 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    setHitPoints(100);
    setAttackDamage(20);
    setEnergyPoints(50);
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap detructor was called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap has enterred in Gate keper mode." << std::endl;
}