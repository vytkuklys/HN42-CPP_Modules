/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:28:26 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:06:01 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie bitten = Zombie();
    Zombie *test;

    bitten.setName("Magic");
    bitten.announce();
    test = bitten.zombieHorde(3, "Coldplay");
    for(int i = 0; i < 3; i++)
    {
        test[i].announce();
    }
    delete [] test;
    return (0);
}