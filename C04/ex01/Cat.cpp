/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:27:07 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor was called" << std::endl;
    type = "Cat";
    brain = new Brain;
}

Cat::Cat(const Cat &original)
{
    type = original.type;
    std::cout << "Cat constructor was called" << std::endl;
    brain = new Brain(*original.brain);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor was called" << std::endl;
}

void Cat::operator=(const Cat &original)
{
    Animal::operator=(original);
    std::cout << "Cat assignment operator was called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
