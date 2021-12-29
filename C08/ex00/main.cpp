/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 02:13:00 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/27 00:21:05 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <class T>
typename std::vector<T>::iterator easyfind(std::vector<T> &vec, int val)
{
    typename std::vector<T>::iterator it;
    it = std::find(vec.begin(), vec.end(), val);
    std::cout << *it << std::endl;
    if (it == vec.end())
    {
        throw std::invalid_argument( "Exception: Value was not found in the given data structure." );
    }
    return (it);
}

int main(int, char **)
{
    std::vector<int> it;
    std::vector<int>::iterator ita;
    it.push_back(1);
    it.push_back(2);
    it.push_back(3);
    try
    {
        ita = easyfind(it, 1);
        std::cout << *ita << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}