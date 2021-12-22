/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:51:50 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 19:08:47 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/OVERLOADS/DESTRUCTORS
Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &original)
{
    *this = original;
}

Serializer &Serializer::operator=(const Serializer &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

Serializer::~Serializer() {}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATIONS

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
    return (p);
}
Data *Serializer::deserialize(uintptr_t raw)
{
    Data *p = reinterpret_cast<Data *>(raw);
    return (p);
}