/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:29:04 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 19:11:35 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &original){
    if (this != &original)
    {
        *this = original;
    }
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &original)
{
    if (this != &original)
    {
        *this = original;
    }
    return (*this);
}

Form *Intern::makeForm(const std::string &form, const std::string &target)
{
    std::string list[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *forms[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (form == list[i])
        {
            return (forms[i]);
        }
    }
    throw(std::invalid_argument("Name of the form is invalid."));
}