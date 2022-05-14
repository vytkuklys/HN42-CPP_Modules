/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:47:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 19:08:44 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Bureaucrat *test = new Bureaucrat("Buro Man", 150);
    Bureaucrat *test = new Bureaucrat("Buro Man", 25);
    // Bureaucrat *test = new Bureaucrat("Buro Man", 1);
    Form *form = new ShrubberyCreationForm("File_not_found");
    Form *form1 = new RobotomyRequestForm("Cop");
    Form *form2 = new PresidentialPardonForm("Miss Jackson");
    
    try
    {
        form->beSigned(*test);
        form1->beSigned(*test);
        form2->beSigned(*test);
        test->executeForm(*form);
        test->executeForm(*form1);
        test->executeForm(*form2);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}