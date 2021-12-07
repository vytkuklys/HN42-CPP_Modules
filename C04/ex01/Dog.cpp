/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 23:20:28 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor was called" << std::endl;
    type = "Dog";
    brain = new Brain;
}


Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Wuf Wuf" << std::endl;
}
