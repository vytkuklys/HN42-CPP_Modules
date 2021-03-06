/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:09:54 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor was called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &original) : Animal(original)
{
    std::cout << "Cat constructor was called" << std::endl;
}

void Cat::operator=(const Cat &original)
{
    Animal::operator=(original);
    std::cout << "Cat assignment operator was called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
