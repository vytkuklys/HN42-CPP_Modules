/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 01:08:04 by vkuklys           #+#    #+#             */
/*   Updated: 2022/01/02 09:16:24 by vkuklys          ###   ########.fr       */
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
    
    MutantStack();
    MutantStack(const Stack &copy);
    ~MutantStack();

    Stack &operator=(const Stack &copy);
    iterator begin();
    iterator end();
};