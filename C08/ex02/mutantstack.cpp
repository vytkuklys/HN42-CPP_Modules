/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 01:23:31 by vkuklys           #+#    #+#             */
/*   Updated: 2022/01/02 09:19:59 by vkuklys          ###   ########.fr       */
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
