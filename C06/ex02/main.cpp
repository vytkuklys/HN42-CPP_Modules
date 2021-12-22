/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:48:21 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 20:45:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main(void)
{
    Base *test = generate();
    identify(test);
    identify(*test);
    delete test;
    return (0);
}