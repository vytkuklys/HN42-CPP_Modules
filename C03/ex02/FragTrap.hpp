/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:44:54 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 15:59:54 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
private:
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &original);
    virtual ~FragTrap();

    void operator=(const FragTrap &original);
    void highFivesGuys(void);
};