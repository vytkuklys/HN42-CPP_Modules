/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:05:24 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/02 13:31:41 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << Name << " died." << std::endl;
}

void Zombie::setName(std::string name)
{
    Name = name;
}

void Zombie::announce(void)
{
    std::cout << Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}