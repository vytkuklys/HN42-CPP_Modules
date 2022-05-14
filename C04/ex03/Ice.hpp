/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:42:28 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:42:35 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &original);
    ~Ice();

    void operator=(const Ice &original);
    AMateria *clone() const;
    virtual void use(ICharacter &target);
};