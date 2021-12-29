/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 01:08:04 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/29 23:44:52 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <deque>

template <class T>
class MutantStack : public std::stack<T>
{
public:
    typedef std::stack<T> Stack;
    typedef typename Stack::container_type Container;
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;
    
    MutantStack();
    MutantStack(const Stack &copy);
    ~MutantStack();

    Stack &operator=(const Stack &copy);
    iterator begin();
    iterator end();
    const_iterator cbegin();
    const_iterator cend();
    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator crbegin();
    const_reverse_iterator crend();
};