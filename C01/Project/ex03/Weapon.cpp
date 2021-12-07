/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:24:43 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:14:15 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const
{
    return (String);
}
void Weapon::setType(const std::string &weapon)
{
    String = weapon;
}

Weapon::Weapon(const std::string &weapon)
{
    String = weapon;
}
