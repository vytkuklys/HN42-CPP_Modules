/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:32:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 18:42:52 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("No name")
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &original) : Name(original.getName()), Grade(original.getGrade())
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &original)
{
    if (this != &original)
    {
        Grade = original.Grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const std::string &name, int const grade) : Name(name)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException(grade);
    }
    if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException(grade);
    }
    Grade = grade;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return (Name);
}

int Bureaucrat::getGrade() const
{
    return (Grade);
}

void Bureaucrat::signForm(int i, const std::string &form) const
{
    switch (i)
    {
    case 0:
        std::cout << "* " << getName() << " signs '"  << form << "' successfully!" << std::endl;
        break;
    case 1:
        std::cout << "* " << getName() << " cannot sign '"  << form << "' because form is invalid!" << std::endl;
        break;
    case 2:
        std::cout << "* " << getName() << " cannot sign '"  << form << "' because grade is too low!" << std::endl;
        break;
    default:
        std::cout << "";
    }
}

Bureaucrat Bureaucrat::operator++()
{
    if (Grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException(Grade);
    }
    if (Grade > 150)
    {
        throw Bureaucrat::GradeTooLowException(Grade);
    }
    Grade--;
    return (*this);
}

Bureaucrat Bureaucrat::operator++(int i)
{
    Bureaucrat tmp = *this;
    if (Grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException(Grade);
    }
    if (Grade > 150)
    {
        throw Bureaucrat::GradeTooLowException(Grade);
    }
    i = Grade;
    --Grade;
    return (tmp);
}

Bureaucrat Bureaucrat::operator--()
{
    if (Grade < 1)
    {
        throw Bureaucrat::GradeTooHighException(Grade);
    }
    if (Grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException(Grade);
    }
    Grade++;
    return (*this);
}

Bureaucrat Bureaucrat::operator--(int i)
{
    Bureaucrat tmp = *this;
    if (Grade < 1)
    {
        throw Bureaucrat::GradeTooHighException(Grade);
    }
    if (Grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException(Grade);
    }
    i = Grade;
    ++Grade;
    return (tmp);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return (out);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    std::string execptionMessage("Given grade is too low for this operation. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Given grade is too low for this operation. Grade has to be in the [1 - 150] range");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const int grade)
{
    std::string execptionMessage("Grade: " + std::to_string(grade) + " is too low for this operation. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()_NOEXCEPT{}

Bureaucrat::GradeTooHighException::~GradeTooHighException()_NOEXCEPT{}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    std::string execptionMessage("Given grade is too high for this operation. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Given grade is too high for this operation. Grade has to be in the [1 - 150] range");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const int grade)
{
    std::string execptionMessage("Grade: " + std::to_string(grade) + " is too high for this operation. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}
