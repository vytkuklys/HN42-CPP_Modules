/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:49:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 20:28:52 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define UNSIGNED_INT_MAX 4294967295;
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
    virtual ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void reduceEnergyPoints(unsigned int amount);
    void addEnergyPoints(unsigned int amount);

    void setHitPoints(unsigned int amount);
    void setEnergyPoints(unsigned int amount);
    void setAttackDamage(unsigned int amount);

    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
};

#endif
