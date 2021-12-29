/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 01:23:31 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/29 02:46:33 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~OVERLOAD/CONSTRUCTORS/DESTRUCTOR

template <class T>
MutantStack<T>::MutantStack() : Stack() {}

template <class T>
MutantStack<T>::MutantStack(const Stack &copy) : Stack(copy) {}

template <class T>
MutantStack<T>::~MutantStack(){};

template <class T>
std::stack<T> &MutantStack<T>::operator=(const Stack &copy)
{
    if (*this != copy)
    {
        *this = copy;
    }
    return (*this);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ITERATORS
template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (Stack::c.begin());
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (Stack::c.end());
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin()
{
    return (Stack::c.cbegin());
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend()
{
    return (Stack::c.cend());
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (Stack::c.rbegin());
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (Stack::c.rend());
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin()
{
    return (Stack::c.crbegin());
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend()
{
    return (Stack::c.crend());
}
