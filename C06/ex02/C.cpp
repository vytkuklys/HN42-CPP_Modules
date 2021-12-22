/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:16:52 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:20:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
C::C() {}

C::C(const C &original)
{
    *this = original;
}

C::~C() {}

C &C::operator=(const C &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATIONS

void C::introduce()
{
    std::cout << "C\n";
}
