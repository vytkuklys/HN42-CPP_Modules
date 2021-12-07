/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:18:19 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/05 23:22:28 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const X;
    Fixed const Y;

public:
    Point();
    ~Point();
    Point(Point const &point);
    Point(float const x, float const y);
    void operator=(Fixed const &fixed);
    bool bsp( Point const a, Point const b, Point const c, Point const point);.
}