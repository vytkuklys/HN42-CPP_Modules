/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 18:24:54 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 145, 137){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) : Form(original.getName(), original.getSigningGrade(), original.getSigningGrade()){}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &original)
{
    if (this != &original)
    {
        Form::setIsSigned(original.getIsSigned());
    }
    return (*this);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATION

void PresidentialPardonForm::callAction()
{
    std::cout << "Target has been pardoned by Zafod Beeblebrox" << std::endl;
}
