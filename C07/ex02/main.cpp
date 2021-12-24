/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:42:04 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/23 20:38:03 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);

    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    std::cout << "Are values equal? " << std::endl;
    std::cout << numbers[42] << " == " << mirror[42] << " ?" << std::endl;
    std::cout << numbers[142] << " == " << mirror[142] << " ?\n" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout << "Trying to access index of [-2]:" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    try
    {
        std::cout << "Trying to access index of array length [MAX_VAL]:" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << "\nAre updated values unequal? " << std::endl;
    std::cout << numbers[42] << " != " << mirror[42] << " ?" << std::endl;
    std::cout << numbers[142] << "!= " << mirror[142] << " ?" << std::endl;
    delete [] mirror;

    Array<int> *empty = new Array<int>(0);
    try{
        std::cout << "\nTrying to access elements of an empty array [0]: " << std::endl;
        (*empty)[0] = 1;
        std::cout << (*empty)[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete empty;
    return 0;
}