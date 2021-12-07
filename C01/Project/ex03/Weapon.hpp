/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:11:40 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:10:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON
#include <iostream>

class Weapon
{
private:
    std::string String;

public:
    std::string getType() const;
    void setType(const std::string &weapon);
    Weapon(const std::string &weapon);
};

#endif