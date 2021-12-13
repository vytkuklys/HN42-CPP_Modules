/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:49:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:00:13 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define UNSIGNED_INT_MAX 4294967295;
#include <iostream>

class ClapTrap
{
protected:
    unsigned int Hit_points;
    std::string Name;
    unsigned int Energy_points;
    unsigned int Attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &original);
    virtual ~ClapTrap();

    void operator=(const ClapTrap &original);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setHitPoints(unsigned int amount);
    void setEnergyPoints(unsigned int amount);
    void setAttackDamage(unsigned int amount);

    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
};

#endif
