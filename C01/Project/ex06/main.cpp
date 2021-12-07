/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:29:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:29:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        return (1);
    }
    Karen test;
    test.karenFilter(argv[1]);
    return (0);
}