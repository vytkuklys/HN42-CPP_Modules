/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:57:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 17:13:50 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

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
    i->makeSound();
    std::cout << "Cat sound: ";
    j->makeSound();
    std::cout << "Animal sound: ";
    meta->makeSound();
    std::cout << std::endl;
    delete meta;
    delete i;
    delete j;

    const WrongAnimal *WrongMeta = new WrongCat();
    std::cout << std::endl;
    std::cout << "WrongMeta object: " << WrongMeta->getType() << " " << std::endl;
    std::cout << "WrongMeta sound: ";
    WrongMeta->makeSound();

    delete WrongMeta;
    // Animal test;
    // Animal test2(test);
    // Animal test3 = test2;
    // test.makeSound();
    // test2.makeSound();
    // test3.makeSound();
    return (0);
}