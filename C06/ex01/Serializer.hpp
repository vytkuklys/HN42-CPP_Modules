/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:46:56 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 19:05:23 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Data.hpp"

class Serializer{
    public:
    Serializer();
    Serializer(const Serializer &original);
    ~Serializer();

    Serializer &operator=(const Serializer &original);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};
