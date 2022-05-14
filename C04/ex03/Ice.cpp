/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:48:50 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:45:12 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor was called" << std::endl;
}

Ice::Ice(const Ice &original) : AMateria(original.type)
{
    std::cout << "Ice constructor was called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice detructor was called" << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::operator=(const Ice &original)
{
    AMateria::type = original.type;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}
