/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:16:52 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:19:06 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
B::B() {}

B::B(const B &original)
{
    *this = original;
}

B::~B() {}

B &B::operator=(const B &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATIONS

void B::introduce()
{
    std::cout << "B\n";
}
