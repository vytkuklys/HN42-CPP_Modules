/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 00:44:52 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/29 03:12:13 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.cpp"
#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.pop();
    mstack.push(3);
    mstack.push(737);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Iterator: ";
    while (it != ite)
    {
        std::cout << *it << "` ";
        ++it;
    }
    std::cout  << '\n';
    MutantStack<int>::const_iterator cit = mstack.cbegin();
    MutantStack<int>::const_iterator cite = mstack.cend();
    std::cout << "Const Iterator: ";
    while (cit != cite)
    {
        std::cout << *cit << "` ";
        ++cit;
    }
    std::cout  << '\n';
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "Reverse Iterator (print value then add 100): ";
    while (rit != rite)
    {
        std::cout << *rit << "` ";
        *rit += 100;
        ++rit;
    }
    std::cout  << '\n';
    MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.crend();
    std::cout << "Const Reverse Iterator (modified values): ";
    while (crit != crite)
    {
        std::cout << *crit << "` ";
        ++crit;
    }
    std::cout  << '\n';
    std::cout << "\n\n*** Stack Information ***\nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl;
    return 0;
}