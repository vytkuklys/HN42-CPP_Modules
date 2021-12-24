/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:53:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/23 20:38:22 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <class T_arr>
void iter(T_arr *arr, int len, void(*func)(T_arr const &a))
{
    for(int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}

template <class T>
void display(T const &a) {
    std::cout << "Hello, your value is: " << a << std::endl;
}

int main(void)
{
    std::string arr[] = {"String 1", "String 2", "String 3"};
    int arr1[] = {1, 2, 3};
    double arr2[] = {1.2, 2.2, 3.2};

    iter(arr, 3, display);
    iter(arr1, 3, display);
    iter(arr2, 3, display);
    return (0);
}
