/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:57:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 23:11:11 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << std::endl;
    std::cout << "Dog object: " << j->getType() << " " << std::endl;
    std::cout << "Cat object: " << i->getType() << " " << std::endl;
    std::cout << "Animal object: " << meta->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << "Dog sound: ";
    i->makeSound(); //will output the cat sound!
    std::cout << "Cat sound: ";
    j->makeSound();
    std::cout << "Animal sound: ";
    meta->makeSound();
    std::cout << std::endl;
    delete meta;
    delete i;
    delete j;
    return (0);
}