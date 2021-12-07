/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:27:57 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 21:35:04 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):FragTrap(name), ScavTrap(name), ClapTrap(name)
{
    Name = name;
}

void DiamondTrap::whoAmI(){
    std::cout << "My name is : " << Name << std::endl;
}