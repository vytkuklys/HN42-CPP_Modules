/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:04:55 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:18:05 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    ClapTrap::Name = "_clap_trap";
    ClapTrap::Hit_points = 100;
    ClapTrap::Energy_points = 100;
    ClapTrap::Attack_damage = 30;
    std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original)
{
    std::cout << "FragTrap constructor was called" << std::endl;
}

void FragTrap::operator=(const FragTrap &original)
{
    ClapTrap::operator=(original);
}

FragTrap::FragTrap(std::string name)
{
    ClapTrap::Name = name + "_clap_trap";
    ClapTrap::Hit_points = 100;
    ClapTrap::Energy_points = 100;
    ClapTrap::Attack_damage = 30;
    std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap detructor was called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Yes to high fives!" << std::endl;
}