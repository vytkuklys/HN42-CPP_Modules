/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:15:47 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:49:43 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;

public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter& target);
};