/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:03:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:59:44 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
    void guardGate();
    bool getGateKeeperMode() const;
};