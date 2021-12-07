/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:04:55 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 20:14:58 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHitPoints(100);
    setAttackDamage(100);
    setEnergyPoints(30);
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