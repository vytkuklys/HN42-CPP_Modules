/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 21:04:01 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("presidential pardon", target, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) : Form(original.getName(), original.getTarget(), original.getSigningGrade(), original.getSigningGrade()){}

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

void PresidentialPardonForm::callAction() const
{
    std::cout << std::endl << Form::getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
