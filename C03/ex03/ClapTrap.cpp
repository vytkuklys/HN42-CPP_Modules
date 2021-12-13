/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:57:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 14:51:43 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name = "";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    Name = original.getName();
    Hit_points = original.getHitPoints();
    Energy_points = original.getEnergyPoints();
    Attack_damage = original.getAttackDamage();
    std::cout << "ClapTrap constructor was called" << std::endl;
}

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

void ClapTrap::operator=(const ClapTrap &original)
{
    Name = original.getName();
    Hit_points = original.getHitPoints();
    Energy_points = original.getEnergyPoints();
    Attack_damage = original.getAttackDamage();
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (Energy_points < amount)
    {
        Energy_points = 0;
        std::cout << Name << " takes " << Energy_points << " damage." << std::endl;
    }
    else
    {
        Energy_points -= amount;
        std::cout << Name << " takes " << amount << " damage." << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points + amount > Energy_points)
    {
        std::cout << Name << " has " << amount << " energy points repaired." << std::endl;
    }
    else
    {
        std::cout << Name << " has " << 4294967295 - Energy_points << " energy points repaired." << std::endl;
    }
}
void ClapTrap::setHitPoints(unsigned int amount)
{
    Hit_points = amount;
}
void ClapTrap::setEnergyPoints(unsigned int amount)
{
    Energy_points = amount;
}
void ClapTrap::setAttackDamage(unsigned int amount)
{
    Attack_damage = amount;
}

std::string ClapTrap::getName() const
{
    return (Name);
}
int ClapTrap::getHitPoints() const
{
    return (Hit_points);
}
int ClapTrap::getEnergyPoints() const
{
    return (Energy_points);
}
int ClapTrap::getAttackDamage() const
{
    return (Attack_damage);
}