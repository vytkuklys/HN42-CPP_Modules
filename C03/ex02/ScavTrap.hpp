/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:03:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 18:24:17 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
private:
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(std::string const & target);
    void guardGate();
};