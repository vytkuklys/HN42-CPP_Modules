/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 02:13:00 by vkuklys           #+#    #+#             */
/*   Updated: 2022/01/02 11:30:07 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <class T>
typename std::vector<T>::iterator easyfind(std::vector<T> &vec, int val)
{
    typename std::vector<T>::iterator it;
    it = std::find(vec.begin(), vec.end(), val);
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
    it.push_back(3);
    it.push_back(4);
    it.push_back(2);
    it.push_back(5);
    try
    {
        ita = easyfind(it, 2);
        std::cout << "The value was found: "<< *ita << std::endl;
        ita = easyfind(it, 11);
        std::cout << "The value was found: "<< *ita << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}