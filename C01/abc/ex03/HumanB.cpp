/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:29:22 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 11:21:31 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    Name = name;
    Is_armed = false;
}

HumanB::~HumanB(void)
{
    std::cout << Name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    Weapon_type = &weapon;
    Is_armed = true;
}

void HumanB::attack(void)
{
    if (Is_armed)
    {   
        std::cout << Name << " attacks with his " << Weapon_type->getType() << std::endl;
    }
    else
    {
        std::cout << Name << " attacks with his bare fists" << std::endl;
    }
}
