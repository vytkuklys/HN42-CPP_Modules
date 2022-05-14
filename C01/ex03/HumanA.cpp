/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:29:22 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 11:30:10 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):Weapon_type(weapon)
{
    Name = name;
}

HumanA::~HumanA(void)
{
    std::cout << Name << " died." << std::endl;
}

void HumanA::attack(void)
{
    std::cout << Name << " attacks with his " << Weapon_type.getType() << std::endl;
}
