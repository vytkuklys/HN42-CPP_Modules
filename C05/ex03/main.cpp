/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:47:17 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 19:19:42 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    

    try
    {
        Bureaucrat *test = new Bureaucrat("Buro Man", 1);
        // Bureaucrat *test = new Bureaucrat("Buro Man", 25);
        // Bureaucrat *test = new Bureaucrat("Buro Man", 100);
        Form* form = someRandomIntern.makeForm("presidential pardon", "Miss Jackson");
        Form* form1 = someRandomIntern.makeForm("robotomy request", "Cop");
        Form* form2 = someRandomIntern.makeForm("shrubbery creation", "Home");

        // Form* nameInvalid = someRandomIntern.makeForm("invalid form name", "Miss Jackson");
        // nameInvalid->beSigned(*test);

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
