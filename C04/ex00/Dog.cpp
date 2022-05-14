/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:10:57 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor was called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &original) : Animal(original)
{
    std::cout << "Dog constructor was called" << std::endl;
}

void Dog::operator=(const Dog &original)
{
    Animal::operator=(original);
    std::cout << "Dog assignment operator was called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wuf Wuf" << std::endl;
}
