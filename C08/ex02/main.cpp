/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 00:44:52 by vkuklys           #+#    #+#             */
/*   Updated: 2022/01/02 09:20:22 by vkuklys          ###   ########.fr       */
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
    mstack_string.pop();
    mstack_string.pop();
    mstack_string.pop();
    std::cout << "\n\n*** String Stack Information ***\nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
    std::cout << "\n*** Int Stack Information ***\nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl;
    return 0;
}