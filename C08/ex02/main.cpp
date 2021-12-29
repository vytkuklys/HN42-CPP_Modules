/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 00:44:52 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/29 23:50:29 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.cpp"
#include "mutantstack.hpp"

int main()
{
    MutantStack<std::string> mstack_string;
    mstack_string.push("Five");
    mstack_string.push("Seventien");
    mstack_string.pop();
    mstack_string.push("Three");
    mstack_string.push("Seven hundred thirty-seven");
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.pop();
    mstack.push(3);
    mstack.push(737);
    MutantStack<std::string>::iterator sit = mstack_string.begin();
    MutantStack<std::string>::iterator site = mstack_string.end();
    ++sit;
    --sit;
    std::cout << "String Iterator: ";
    while (sit != site)
    {
        std::cout << *sit << ", ";
        ++sit;
    }
    std::cout  << '\n';
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Int Iterator: ";
    while (it != ite)
    {
        std::cout << *it << "` ";
        ++it;
    }
    std::cout  << '\n';
    MutantStack<int>::const_iterator cit = mstack.cbegin();
    MutantStack<int>::const_iterator cite = mstack.cend();
    std::cout << "Int Const Iterator: ";
    while (cit != cite)
    {
        std::cout << *cit << "` ";
        ++cit;
    }
    std::cout  << '\n';
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "Int Reverse Iterator (print value then add 100): ";
    while (rit != rite)
    {
        std::cout << *rit << "` ";
        *rit += 100;
        ++rit;
    }
    std::cout  << '\n';
    MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.crend();
    std::cout << "Int Const Reverse Iterator (modified values): ";
    while (crit != crite)
    {
        std::cout << *crit << "` ";
        ++crit;
    }
    mstack_string.pop();
    mstack_string.pop();
    mstack_string.pop();
    std::cout << "\n\n*** String Stack Information ***\nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
    std::cout << "\n*** Int Stack Information ***\nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl;
    return 0;
}