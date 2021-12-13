/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:04:55 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:19:44 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    ClapTrap::Name = "";
    ClapTrap::Hit_points = 100;
    ClapTrap::Attack_damage = 20;
    ClapTrap::Energy_points = 50;
    Gate_keeper_mode = false;
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original)
{
    Gate_keeper_mode = original.getGateKeeperMode();
    std::cout << "ScavTrap constructor was called" << std::endl;
}

bool ScavTrap::getGateKeeperMode() const
{
    return (Gate_keeper_mode);
}

void ScavTrap::operator=(const ScavTrap &original)
{
    ClapTrap::operator=(original);
    Gate_keeper_mode = original.getGateKeeperMode();
}

ScavTrap::ScavTrap(std::string name)
{
    ClapTrap::Name = name;
    ClapTrap::Hit_points = 100;
    ClapTrap::Attack_damage = 20;
    ClapTrap::Energy_points = 50;
    Gate_keeper_mode = false;
    std::cout << "ScavTrap constructor was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap detructor was called" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap has enterred in Gate keper mode." << std::endl;
    Gate_keeper_mode = true;
}