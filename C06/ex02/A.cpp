/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:16:52 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:20:37 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
A::A() {}

A::A(const A &original)
{
    *this = original;
}

A::~A() {}

A &A::operator=(const A &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATIONS

void A::introduce()
{
    std::cout << "A\n";
}
