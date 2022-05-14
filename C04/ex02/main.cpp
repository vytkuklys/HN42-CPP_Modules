/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:57:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/13 20:38:27 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
    // Animal test;

    const Animal* arr[4];
    for(int i = 0; i < 4; i++)
    {
        std::cout << std::endl;
        if (i % 2)
        {
            arr[i] = new Dog();
        }
        else{
            arr[i] = new Cat();
        }
        arr[i]->makeSound();
    }
    for(int i = 0; i < 4; i++)
    {
        std::cout << std::endl;
        delete arr[i];
    }
    std::cout << std::endl;
    Dog deep;
    {
        std::cout << std::endl;
        Dog deeper(deep);
    }
    std::cout << std::endl;
    return (0);
}