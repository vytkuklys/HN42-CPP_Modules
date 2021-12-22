/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:54:36 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:25:04 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"

class B : public Base{
    public:
    B();
    B(const B &original);
    ~B();

    B &operator=(const B &original);
    void introduce();
};