/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 18:26:46 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : Form(original.getName(), original.getSigningGrade(), original.getSigningGrade()){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
    if (this != &original)
    {
        Form::setIsSigned(original.getIsSigned());
    }
    return (*this);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATION

void ShrubberyCreationForm::callAction()
{
    std::string tree = "     *\n    ***\n   *****\n  *******\n *********\n    ***";
    std::cout << tree << std::endl;
}
