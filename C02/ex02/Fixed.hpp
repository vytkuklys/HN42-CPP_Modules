/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:03:22 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/07 18:37:23 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed_point_value;
    static const int width;

public:
    Fixed();
    Fixed(Fixed const &fixed);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();

    void operator=(Fixed const &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt() const;
    float toFloat() const;

    Fixed operator++();
    Fixed operator++(int i);
    Fixed operator--();
    Fixed operator--(int i);
    Fixed operator*(Fixed fixed) const;
    Fixed operator/(Fixed fixed) const;
    Fixed operator-(Fixed fixed) const;
    Fixed operator+(Fixed fixed) const;

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(Fixed const &a, Fixed const &b);
    static const Fixed &max(Fixed const &a, const Fixed &b);

    bool operator>(Fixed fixed) const;
    bool operator<(Fixed fixed) const;
    bool operator>=(Fixed fixed) const;
    bool operator<=(Fixed fixed) const;
    bool operator==(Fixed fixed) const;
    bool operator!=(Fixed fixed) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
