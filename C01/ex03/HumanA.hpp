/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:26:18 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 11:30:02 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void attack(void);
private:
    std::string Name;
    Weapon &Weapon_type;
};

#endif
