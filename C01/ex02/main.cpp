/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:56:46 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:09:04 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPtr;
    std::string &stringRef = string;

    stringPtr = &string;
    std::cout << "Address of string: " <<&string << "\nAddress of stringRef: " << &stringRef << "\nAddress of stringPtr: " << stringPtr << std::endl;
    std::cout << "String value using pointer: " << *stringPtr << "\nString value using reference: " << stringRef << std::endl;
}