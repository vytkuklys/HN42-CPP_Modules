/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:05:24 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/02 13:45:09 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie* bitten = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        bitten[i].setName(name);
    }
    return (bitten);
}