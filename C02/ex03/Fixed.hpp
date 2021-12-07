/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:03:22 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/05 22:47:06 by vkuklys          ###   ########.fr       */
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

    Fixed operator++()
    {
        fixed_point_value++;
        return (*this);
    }

    Fixed operator++(int i)
    {
        Fixed tmp = *this;
        i = fixed_point_value;
        ++fixed_point_value;
        return (tmp);
    }

    Fixed operator--()
    {
        fixed_point_value--;
        return (*this);
    }

    Fixed operator--(int i)
    {
        Fixed tmp = *this;
        i = fixed_point_value;
        --fixed_point_value;
        return (tmp);
    }

    Fixed operator*(Fixed fixed) const
    {
        Fixed tmp(this->toFloat() * fixed.toFloat());
        return (tmp);
    }
    Fixed operator/(Fixed fixed) const
    {
        Fixed tmp(this->toFloat() / fixed.toFloat());
        return (tmp);
    }
    Fixed operator-(Fixed fixed) const
    {
        Fixed tmp(this->toFloat() - fixed.toFloat());
        return (tmp);
    }
    Fixed operator+(Fixed fixed) const
    {
        Fixed tmp(this->toFloat() + fixed.toFloat());
        return (tmp);
    }
    static Fixed &min(Fixed &a, Fixed &b)
    {
        if (a.toFloat() <= b.toFloat())
        {
            return (a);
        }
        return (b);
    }
    static Fixed &max(Fixed &a, Fixed &b)
    {
        if (a.toFloat() >= b.toFloat())
        {
            return (a);
        }
        return (b);
    }
     static const Fixed &min(Fixed const &a, Fixed const &b)
    {
        if (a.toFloat() <= b.toFloat())
        {
            return (a);
        }
        return (b);
    }
    static const Fixed &max(Fixed const &a, const Fixed &b)
    {
        if (a.toFloat() >= b.toFloat())
        {
            return (a);
        }
        return (b);
    }
    bool operator>(Fixed fixed) const
    {
        if (this->toFloat() > fixed.toFloat())
        {
            return (true);
        }
        return (false);
    }
    bool operator<(Fixed fixed) const
    {
        if (this->toFloat() < fixed.toFloat())
        {
            return (true);
        }
        return (false);
    }
    bool operator>=(Fixed fixed) const
    {
        if (this->toFloat() >= fixed.toFloat())
        {
            return (true);
        }
        return (false);
    }
    bool operator<=(Fixed fixed) const
    {
        if (this->toFloat() <= fixed.toFloat())
        {
            return (true);
        }
        return (false);
    }
    bool operator==(Fixed fixed) const
    {
        if (this->toFloat() == fixed.toFloat())
        {
            return (true);
        }
        return (false);
    }
    bool operator!=(Fixed fixed) const
    {
        if (this->toFloat() != fixed.toFloat())
        {
            return (true);
        }
        return (false);
    }
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
