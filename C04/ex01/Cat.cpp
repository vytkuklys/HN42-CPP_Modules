/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 23:20:53 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor was called" << std::endl;
    type = "Cat";
    brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
