/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:20:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/23 19:58:10 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <class T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T &min(T &a, T &b)
{
    if (a < b)
    {
        return (a);
    }
    return b;
}

template <class T>
T &max(T &a, T &b)
{
    if (a > b)
    {
        return (a);
    }
    return b;
}

int main(void)
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    double e = 21.21;
    double f = 42.42;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
    std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;
    float g = 42.0f;
    float h = 42.0f;
    ::swap(g, h);
    std::cout << "e = " << e << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min(g, h) << std::endl;
    std::cout << "max( g, h ) = " << ::max(g, h) << std::endl;
    return 0;
}