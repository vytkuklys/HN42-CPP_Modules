/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:28:26 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/01 15:41:41 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie bitten = Zombie("Lebron James");
    Zombie *test;

    bitten.announce();
    bitten.randomChump("Michael Jordan");
    test = bitten.newZombie("Kobe Bryant");
    test->announce();
    delete test;
    return (0);
}