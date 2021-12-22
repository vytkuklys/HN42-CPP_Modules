/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:54:36 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:25:07 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"

class C : public Base{
    public:
    C();
    C(const C &original);
    ~C();

    C &operator=(const C &original);
    void introduce();
};