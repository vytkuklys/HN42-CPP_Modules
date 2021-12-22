/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 20:27:52 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("shrubbery creation", target, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : Form(original.getName(), original.getTarget(), original.getSigningGrade(), original.getSigningGrade()){}

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

void ShrubberyCreationForm::callAction() const
{
    std::ofstream file;
    std::string filename = Form::getTarget() + "_shrubbery";
    std::string tree = "     *\n    ***\n   *****\n  *******\n *********\n    ***";
    file.open(filename);
    if (!file)
    {
        std::cout << "Error occured when opening the file." << std::endl;
        return ;
    }
    file << tree;
    file.close();
}
