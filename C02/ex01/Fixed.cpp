/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:07:33 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/11 14:58:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::width = 8;

Fixed::Fixed()
{
    fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point_value = value << width;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point_value = roundf(value * (1 << width));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    fixed_point_value = fixed.getRawBits();
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point_value);
}
void Fixed::setRawBits(int const raw)
{
    fixed_point_value = raw;
}

int Fixed::toInt() const
{
    return(fixed_point_value >> width);
}

float Fixed::toFloat() const
{
    return((float)fixed_point_value / (1 << width));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return(out);
}
