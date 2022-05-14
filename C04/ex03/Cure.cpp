/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:48:50 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:47:29 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor was called" << std::endl;
}

Cure::Cure(const Cure &original) : AMateria(original.type)
{
    std::cout << "Cure constructor was called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure detructor was called" << std::endl;
}
AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::operator=(const Cure &original)
{
    AMateria::type = original.type;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}