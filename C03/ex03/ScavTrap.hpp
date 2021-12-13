/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:03:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:00:32 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    bool Gate_keeper_mode;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &original);
    virtual ~ScavTrap();

    void operator=(const ScavTrap &original);
    void attack(std::string const & target);
    bool getGateKeeperMode() const;
    void guardGate();
};

#endif