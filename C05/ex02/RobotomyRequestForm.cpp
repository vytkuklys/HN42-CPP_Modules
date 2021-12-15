/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:27 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 18:26:19 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 145, 137){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : Form(original.getName(), original.getSigningGrade(), original.getSigningGrade()){}

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

int RobotomyRequestForm::getRandom()
{
    std::srand( ( unsigned int )std::time( nullptr ) );
    return (rand() % 2);
}

void RobotomyRequestForm::callAction()
{
    int random = getRandom();
    if (random)
    {
        std::cout << "*TRRRRRRRRRR target has been robotomized successfully" << std::endl;
        return ;
    }
    std::cout << "*TRRRRRRRRrrrRRrrrRRr robotamization of target was a failure" << std::endl;
}
