/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:37:45 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:14:02 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal constructor was called" << std::endl;
}

Animal::Animal(const Animal &original)
{
    type = original.type;
    std::cout << "Animal constructor was called" << std::endl;
}

void Animal::operator=(const Animal &original)
{
    type = original.type;
    std::cout << "Animal assignment operator was called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor was called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
std::string Animal::getType() const
{
    return (type);
}