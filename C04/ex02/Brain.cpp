/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 23:17:29 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 17:27:50 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor was called" << std::endl;
}

Brain::Brain(const Brain &original)
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = original.ideas[i];
    }
    std::cout << "Brain constructor was called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor was called" << std::endl;
}

void Brain::operator=(const Brain &original)
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = original.ideas[i];
    }
    std::cout << "Brain assignment operator was called" << std::endl;
}
