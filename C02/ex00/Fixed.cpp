/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:07:33 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/10 20:56:02 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::width = 8;

Fixed::Fixed()
{
    fixed_point_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed)
{
    fixed.fixed_point_value = 0;
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed &fixed)
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