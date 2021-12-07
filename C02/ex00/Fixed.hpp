/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:03:22 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/05 16:50:14 by vkuklys          ###   ########.fr       */
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
    Fixed(Fixed &fixed);
    Fixed(int const value);
    ~Fixed();

    void operator=(Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};