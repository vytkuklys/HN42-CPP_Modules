/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:54:36 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:24:57 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"

class A : public Base{
    public:
    A();
    A(const A &original);
    ~A();

    A &operator=(const A &original);
    void introduce();
};