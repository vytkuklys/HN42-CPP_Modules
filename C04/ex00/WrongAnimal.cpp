/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:37:45 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:13:23 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
    type = original.type;
    std::cout << "WrongAnimal constructor was called" << std::endl;
}

void WrongAnimal::operator=(const WrongAnimal &original)
{
    type = original.type;
    std::cout << "WrongAnimal assignment operator was called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor was called" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (type);
}