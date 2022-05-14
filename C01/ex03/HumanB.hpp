/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:26:18 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 10:40:29 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string Name;
    Weapon *Weapon_type;
    bool Is_armed;
public:
    HumanB(std::string name);
    ~HumanB(void);
    void setWeapon(Weapon &weapon);
    void attack(void);
};

#endif