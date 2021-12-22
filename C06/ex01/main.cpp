/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:48:21 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 19:47:05 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main(void)
{
    Serializer test;
    Data data = {
        .Name = "Rihanna",
        .Number = 123
    };
    Data *data2 = test.deserialize(test.serialize(&data));
    std::cout << data2->Name << ". What's my name?\n" << data2->Name << ". What's my name? " << "\nAnd what's my number? " << data2->Number;
    std::cout << "\n\nAddress of data: " << &data << "\nAddress in data2: " << data2;
    return (0);
}