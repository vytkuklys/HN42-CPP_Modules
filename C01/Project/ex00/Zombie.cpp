/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:05:24 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/01 13:30:06 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Name = name;
}

Zombie::~Zombie(void)
{
    std::cout << Name << " died." << std::endl;
}


void Zombie::announce(void)
{
    std::cout << Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}