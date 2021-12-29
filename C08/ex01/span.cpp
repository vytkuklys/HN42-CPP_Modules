/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 17:24:44 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/25 23:42:41 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/OVERLOADS/DESTRUCTOR

Span::Span() : N(0) {}

Span::Span(const Span &copy)
{
    N = copy.N;
    if (N > 0)
    {
        std::copy(copy.Numbers.begin(), copy.Numbers.end(), back_inserter(Numbers));
        it = Numbers.begin() + (copy.it - copy.Numbers.begin());
    }
}

Span &Span::operator=(const Span &A)
{
    if (A.N)
    {
        if (N > A.N && A.N)
        {
            Numbers.erase(std::remove(Numbers.begin() + (A.N - 1), Numbers.end(), N - A.N), Numbers.end());
            std::copy(A.Numbers.begin(), A.Numbers.end(), Numbers.begin());
        }
        else if (N == A.N && A.N)
        {
            std::copy(A.Numbers.begin(), A.Numbers.end(), Numbers.begin());
        }
        else if (A.N)
        {
            if (N > 0)
            {
                Numbers.erase(std::remove(Numbers.begin(), Numbers.end(), N), Numbers.end());
            }
            std::copy(A.Numbers.begin(), A.Numbers.end(), back_inserter(Numbers));
        }
        it = Numbers.begin() + (A.it - A.Numbers.begin());
        N = A.N;
    }
    else
    {
        if (N)
        {
            Numbers.erase(std::remove(Numbers.begin(), Numbers.end(), N), Numbers.end());
        }
        N = A.N;
    }
    return (*this);
}

Span::Span(const unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        Numbers.push_back(0);
    }
    if (n > 0)
    {
        it = Numbers.begin();
    }
    N = n;
}

Span::~Span() {}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATION

void Span::addNumber(const int value)
{
    if (N == 0 || it == Numbers.end())
    {
        Span::InvalidOperationException();
    }
    *it = value;
    it++;
}

void Span::addNumbers(const unsigned int n, const int value)
{
    if (!N || !n || it == Numbers.end() || it - Numbers.begin() + n > N)
    {
        Span::InvalidOperationException();
    }
    std::fill(it, it + n, value);
    it += n;
}

unsigned int Span::shortestSpan()
{
    unsigned int span;
    int tmp;
    if (N < 2 || it - Numbers.begin() < 2)
    {
        Span::InvalidOperationException();
    }
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> minMax = std::minmax_element(Numbers.begin(), Numbers.end());
    if (*minMax.first == *minMax.second)
    {
        return 0;
    }
    tmp = *minMax.second;
    for (std::vector<int>::iterator i = Numbers.begin(); i < Numbers.end(); i++)
    {
        if (*i != *minMax.first && tmp > *i)
        {
            tmp = *i;
        }
    }
    span = tmp - *minMax.first;
    return (span);
}

unsigned int Span::longestSpan()
{
    unsigned int span;
    if (N < 2 || it - Numbers.begin() < 2)
    {
        Span::InvalidOperationException();
    }
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> minMax;
    minMax = std::minmax_element(Numbers.begin(), Numbers.end());
    span = *minMax.second - *minMax.first;
    return (span);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~EXCEPTION

Span::InvalidOperationException::~InvalidOperationException()_NOEXCEPT{}

Span::InvalidOperationException::InvalidOperationException()
{
    std::string execptionMessage("Exception: Invalid operation.");
    throw(std::invalid_argument(execptionMessage));
}

Span::InvalidOperationException::InvalidOperationException(const InvalidOperationException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Exception: Invalid operation.");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Span::InvalidOperationException &Span::InvalidOperationException::operator=(const InvalidOperationException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

