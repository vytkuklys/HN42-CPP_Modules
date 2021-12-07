/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:29:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 16:50:57 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen test;
    test.complain("DEBUG");
    std::cout << std::endl;
    test.complain("INFO");
    std::cout << std::endl;
    test.complain("WARNING");
    std::cout << std::endl;
    test.complain("ERROR");
    return (0);
}