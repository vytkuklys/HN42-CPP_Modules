/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:47:06 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:18:54 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor was called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
    std::cout << "WrongCat constructor was called" << std::endl;
}

void WrongCat::operator=(const WrongCat &original)
{
    WrongAnimal::operator=(original);
    std::cout << "WrongCat assignment operator was called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor was called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
