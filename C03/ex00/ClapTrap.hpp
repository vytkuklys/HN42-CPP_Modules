/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:49:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 15:14:27 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
    unsigned int Hit_points;
    std::string Name;
    unsigned int Energy_points;
    unsigned int Attack_damage;

public:
    ClapTrap(std::string name);
    ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void reduceEnergyPoints(unsigned int amount);
    void addEnergyPoints(unsigned int amount);
};
