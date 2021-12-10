/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:18:16 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/10 20:42:31 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : X(0), Y(0)
{
}

Point::Point(float const x, float const y) : X(x), Y(y)
{
}

Point::Point(Point const &point) : X(point.X.toFloat()), Y(point.Y.toFloat())
{
}

Point::~Point()
{
}
void Point::operator=(Point const &point)
{
    Point(point.X.toFloat(), point.Y.toFloat());
}

float Point::getFloatX() const
{
    return (X.toFloat());
}
float Point::getFloatY() const
{
    return (Y.toFloat());
}

float Point::getTriangleArea(Point const a, Point const b, Point const c)
{
    float ax = a.getFloatX();
    float ay = a.getFloatY();
    float bx = b.getFloatX();
    float by = b.getFloatY();
    float cx = c.getFloatX();
    float cy = c.getFloatY();

    return abs(0.5 * (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)));
}
bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    float a1 = getTriangleArea(a, b, point);
    float a2 = getTriangleArea(a, c, point);
    float a3 = getTriangleArea(b, c, point);
    if (a1 == 0 || a2 == 0 || a3 == 0)
    {
        return (false);
    }
    float a0 = getTriangleArea(a, b, c);
    return ((a0 == a1 + a2 + a3) ? true : false);
}
