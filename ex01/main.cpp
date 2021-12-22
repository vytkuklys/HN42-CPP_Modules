/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:47:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 19:21:50 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form form_test("Magic", 3, 25);
        // Form form_test("Magic", 3, 225);
        Bureaucrat test("Puppers", 2);
        // Bureaucrat test("Puppers", 0);
        std::cout << form_test << std::endl;
        form_test.beSigned(test);
        std::cout << '\n' <<form_test << std::endl;
        Bureaucrat test2("Puppers", 81);
        form_test.beSigned(test2);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}