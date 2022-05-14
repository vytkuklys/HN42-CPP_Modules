/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:01:32 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:51:34 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
    std::cout << "AMateria constructor was called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor was called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "undefined action" << target.getName() << std::endl;
}