/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:27:57 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:32:59 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    FragTrap::setHitPoints(100);
    ScavTrap::setEnergyPoints(50);
    FragTrap::setAttackDamage(30);
    ClapTrap::Name = "_clap_trap";
    Name = "";
    std::cout << "DiamondTrap constructor was called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) : ClapTrap(original), FragTrap(original), ScavTrap(original)
{
    Name = original.getDiamondName();
    std::cout << "DiamondTrap constructor was called" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &original)
{
    ClapTrap::operator=(original);
    FragTrap::operator=(original);
    ScavTrap::operator=(original);
    Name = original.getDiamondName();
}

DiamondTrap::DiamondTrap(std::string name)
{
    FragTrap::setHitPoints(100);
    ScavTrap::setEnergyPoints(50);
    FragTrap::setAttackDamage(30);
    ClapTrap::Name = name + "_clap_trap";
    Name = name;
    std::cout << "DiamondTrap constructor was called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor was called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is : " << getDiamondName() << ". Claptrap name is : " << getName() << std::endl;
}

std::string DiamondTrap::getDiamondName() const
{
    return (Name);
}

void DiamondTrap::printDiamondStats() const
{
    std::cout << getDiamondName() << "'s Hit points: " << getHitPoints() << ", Energy points: " << getEnergyPoints() << ", Attack damage: " << getAttackDamage() << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}