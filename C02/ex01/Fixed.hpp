/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:03:22 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/05 19:10:39 by vkuklys          ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

