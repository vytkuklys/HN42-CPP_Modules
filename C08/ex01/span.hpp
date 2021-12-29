/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:24:51 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/29 23:51:31 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#define MAX_INT 2147483647
#define MIN_INT -2147483648

class Span
{
private:
    unsigned int N;
    std::vector<int>::iterator it;
    std::vector<int> Numbers;

public:
    Span();
    Span(const Span &copy);
    Span(const unsigned int n);
    ~Span();

    Span &operator=(const Span &assignment);

    void addNumber(const int value);
    void addNumber(const unsigned int n, const int value);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class InvalidOperationException : public std::exception
    {
    public:
        InvalidOperationException();
        InvalidOperationException(const InvalidOperationException &original);
        ~InvalidOperationException() _NOEXCEPT;

        InvalidOperationException &operator=(const InvalidOperationException &original);
    };
};
