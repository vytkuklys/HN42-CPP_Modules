/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:07:33 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/10 21:12:54 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::width = 8;

Fixed::Fixed()
{
    fixed_point_value = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
    *this = fixed;
}

Fixed::Fixed(int const value)
{
    fixed_point_value = value << width;
}

Fixed::Fixed(float const value)
{
    fixed_point_value = roundf(value * (1 << width));
}

Fixed::~Fixed()
{
}

void Fixed::operator=(Fixed const &fixed)
{
    fixed_point_value = fixed.getRawBits();
}

int Fixed::getRawBits(void) const
{
    return (fixed_point_value);
}
void Fixed::setRawBits(int const raw)
{
    fixed_point_value = raw;
}

int Fixed::toInt() const
{
    return (fixed_point_value >> width);
}

float Fixed::toFloat() const
{
    return ((float)fixed_point_value / (1 << width));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed Fixed::operator++()
{
    fixed_point_value++;
    return (*this);
}

Fixed Fixed::operator++(int i)
{
    Fixed tmp = *this;
    i = fixed_point_value;
    ++fixed_point_value;
    return (tmp);
}

Fixed Fixed::operator--()
{
    fixed_point_value--;
    return (*this);
}

Fixed Fixed::operator--(int i)
{
    Fixed tmp = *this;
    i = fixed_point_value;
    --fixed_point_value;
    return (tmp);
}

Fixed Fixed::operator*(Fixed fixed) const
{
    Fixed tmp(this->toFloat() * fixed.toFloat());
    return (tmp);
}
Fixed Fixed::operator/(Fixed fixed) const
{
    Fixed tmp(this->toFloat() / fixed.toFloat());
    return (tmp);
}
Fixed Fixed::operator-(Fixed fixed) const
{
    Fixed tmp(this->toFloat() - fixed.toFloat());
    return (tmp);
}
Fixed Fixed::operator+(Fixed fixed) const
{
    Fixed tmp(this->toFloat() + fixed.toFloat());
    return (tmp);
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() <= b.toFloat())
    {
        return (a);
    }
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() >= b.toFloat())
    {
        return (a);
    }
    return (b);
}
const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() <= b.toFloat())
    {
        return (a);
    }
    return (b);
}
const Fixed &Fixed::max(Fixed const &a, const Fixed &b)
{
    if (a.toFloat() >= b.toFloat())
    {
        return (a);
    }
    return (b);
}
bool Fixed::operator>(Fixed fixed) const
{
    if (this->toFloat() > fixed.toFloat())
    {
        return (true);
    }
    return (false);
}
bool Fixed::operator<(Fixed fixed) const
{
    if (this->toFloat() < fixed.toFloat())
    {
        return (true);
    }
    return (false);
}
bool Fixed::operator>=(Fixed fixed) const
{
    if (this->toFloat() >= fixed.toFloat())
    {
        return (true);
    }
    return (false);
}
bool Fixed::operator<=(Fixed fixed) const
{
    if (this->toFloat() <= fixed.toFloat())
    {
        return (true);
    }
    return (false);
}
bool Fixed::operator==(Fixed fixed) const
{
    if (this->toFloat() == fixed.toFloat())
    {
        return (true);
    }
    return (false);
}
bool Fixed::operator!=(Fixed fixed) const
{
    if (this->toFloat() != fixed.toFloat())
    {
        return (true);
    }
    return (false);
}