/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:57:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 14:48:40 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor was called" << std::endl;
    Name = "";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "ClapTrap constructor was called" << std::endl;
    Name = original.Name;
    Hit_points = original.Hit_points;
    Energy_points = original.Energy_points;
    Attack_damage = original.Attack_damage;
}

void ClapTrap::operator=(const ClapTrap &original)
{
    Name = original.Name;
    Hit_points = original.Hit_points;
    Energy_points = original.Energy_points;
    Attack_damage = original.Attack_damage;
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
