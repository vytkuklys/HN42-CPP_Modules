/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:57:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 16:58:52 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor was called" << std::endl;
    Name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor was called" << std::endl;
}
void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " takes " << amount << " damage." << std::endl;
    reduceEnergyPoints(amount);
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << Name << " has " << amount << " energy points repaired." << std::endl;
    addEnergyPoints(amount);
}

void ClapTrap::reduceEnergyPoints(unsigned int amount)
{
    if (Energy_points < amount)
    {
        Energy_points = 0;
    }
    else
    {
        Energy_points -= amount;
    }
}

void ClapTrap::addEnergyPoints(unsigned int amount)
{
    if (Energy_points + amount > Energy_points)
    {
        Energy_points = Energy_points + amount;
    }
    else
    {
        Energy_points = 4294967295;
    }
}