/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:32:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/14 21:15:34 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Form.hpp"

Form::Form() : Name("No name"), IsSigned(false), ExecutingGrade(0), SigningGrade(0)
{
}

Form::Form(const Form &original) : Name(original.getName()), IsSigned(original.IsSigned), ExecutingGrade(original.getExecutingGrade()), SigningGrade(original.getSigningGrade())
{
}

Form &Form::operator=(const Form &original)
{
    if (this != &original)
    {
        IsSigned = original.getIsSigned();
    }
    return (*this);
}

Form::Form(const std::string &name, int const signing_grade, int const executing_grade) : Name(name), IsSigned(false), ExecutingGrade(executing_grade), SigningGrade(signing_grade)
{
    if (signing_grade < 1 || executing_grade < 1)
    {
        throw Form::GradeTooHighException();
    }
    if (signing_grade > 150 || executing_grade > 150)
    {
        throw Form::GradeTooLowException();
    }
}

Form::~Form() {}

std::string Form::getName() const
{
    return (Name);
}

int Form::getSigningGrade() const
{
    return (SigningGrade);
}

int Form::getExecutingGrade() const
{
    return (ExecutingGrade);
}

bool Form::getIsSigned() const
{
    return (IsSigned);
}

void Form::beSigned(Bureaucrat &Mr)
{
    if ((!getSigningGrade() || !getExecutingGrade()) || (getSigningGrade() > 150 || getExecutingGrade() > 150))
    {
        Mr.signForm(1, getName());
        return ;
    }
    if (Mr.getGrade() > getSigningGrade())
    {
        Mr.signForm(2, getName());
        throw Form::GradeTooLowException(Mr.getGrade(), getSigningGrade());
    }
    Mr.signForm(0, getName());
    IsSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
    out << "The form '" << Form.getName() << (Form.getIsSigned() == true ? "', is signed. " : "', is NOT signed. ") << "\nMinimum signing grade: " << Form.getSigningGrade() << "\nMinimum executing grade: " << Form.getExecutingGrade() << std::endl;
    return (out);
}

Form::GradeTooLowException::GradeTooLowException()
{
    std::string execptionMessage("Given grade is too low. Grades have to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Given grade is too low for this operation. Grade has to be in the [1 - 150] range");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Form::GradeTooLowException::GradeTooLowException(const int grade)
{
    std::string execptionMessage("Grade: " + std::to_string(grade) + " is too low for this operation. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Form::GradeTooLowException::GradeTooLowException(const int grade, const int valid)
{
    std::string exceptionMessage;
    exceptionMessage = "Grade: " + std::to_string(grade) + " is too low for this operation. Grade has to be higher than " + std::to_string(valid);
    throw(std::invalid_argument(exceptionMessage));
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &original)
{
    if (this != &original)
    {
        *this = original;
    }
    return (*this);
}

Form::GradeTooHighException::GradeTooHighException()
{
    std::string execptionMessage("Given grade is too high. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Given grade is too high for this operation. Grade has to be in the [1 - 150] range");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Form::GradeTooHighException::GradeTooHighException(const int grade)
{
    std::string execptionMessage("Grade: " + std::to_string(grade) + " is too high for this operation. Grade has to be in the [1 - 150] range");
    throw(std::invalid_argument(execptionMessage));
}

Form::GradeTooHighException::GradeTooHighException(const int grade, const int valid)
{
    std::string exceptionMessage;
    exceptionMessage = "Grade: " + std::to_string(grade) + " is too high for this operation. Grade has to be higher than " + std::to_string(valid);
    throw(std::invalid_argument(exceptionMessage));
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}
