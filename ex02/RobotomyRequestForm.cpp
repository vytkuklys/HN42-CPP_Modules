/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 21:03:51 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("robotomy request", target, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : Form(original.getName(), original.getTarget(), original.getSigningGrade(), original.getSigningGrade()){}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
    if (this != &original)
    {
        Form::setIsSigned(original.getIsSigned());
    }
    return (*this);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATION

int RobotomyRequestForm::getRandom() const
{
    std::srand( ( unsigned int )std::time( nullptr ) );
    return (rand() % 2);
}

void RobotomyRequestForm::callAction() const
{
    if (getRandom())
    {
        std::cout << "\n* TRRRRRRRRRR " << Form::getTarget() << " has been robotomized successfully" << std::endl;
        return ;
    }
    std::cout << "\n* TRRRRRRRRrrrRRrrrRRr robotamization of " << Form::getTarget() << " was a failure" << std::endl;
}
