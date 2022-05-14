/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:32:03 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor was called" << std::endl;
    type = "Dog";
    brain = new Brain;
}

Dog::Dog(const Dog &original)
{
    std::cout << "Dog constructor was called" << std::endl;
    type = original.type;
    brain = new Brain(*original.brain);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor was called" << std::endl;
}

void Dog::operator=(const Dog &original)
{
    Animal::operator=(original);
    std::cout << "Dog assignment operator was called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wuf Wuf" << std::endl;
}
