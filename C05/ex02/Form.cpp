/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:32:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 18:24:04 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Form.hpp"
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/DESTRUCTOR/OVERLOADS
Form::Form() : Name("No name"), IsSigned(false), ExecutingGrade(0), SigningGrade(0)
{
}

Form::Form(const Form &original) : Name(original.getName()), IsSigned(original.IsSigned), ExecutingGrade(original.getExecutingGrade()), SigningGrade(original.getSigningGrade())
{
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
    out << "The form '" << Form.getName() << (Form.getIsSigned() == true ? "', is signed. " : "', is NOT signed. ") << "\nMinimum signing grade: " << Form.getSigningGrade() << "\nMinimum executing grade: " << Form.getExecutingGrade() << std::endl;
    return (out);
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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GETTERS
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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SETTERS

void Form::setIsSigned(bool val)
{
    IsSigned = val;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATIONS
void Form::beSigned(Bureaucrat &Mr)
{
    if ((!getSigningGrade() || !getExecutingGrade()) || (getSigningGrade() > 150 || getExecutingGrade() > 150))
    {
        Mr.signForm(1, getName());
        return;
    }
    if (Mr.getGrade() > getSigningGrade())
    {
        Mr.signForm(2, getName());
        throw Form::GradeTooLowException(Mr.getGrade(), getSigningGrade());
    }
    Mr.signForm(0, getName());
    IsSigned = true;
}

void Form::execute(Bureaucrat const &executor)
{
    if (!getIsSigned())
    {
        throw Form::UnsignedFormException();
    }
    if (executor.getGrade() > getExecutingGrade())
    {
        throw Form::GradeTooLowException(getExecutingGrade(), executor.getGrade());
    }
    callAction();
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~EXCEPTIONS
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

Form::GradeTooLowException::GradeTooLowException(std::string exception_message)
{
    throw(std::invalid_argument(exception_message));
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

Form::UnsignedFormException::UnsignedFormException()
{
    std::string execptionMessage("This form cannot be executed because it is not signed");
    throw(std::invalid_argument(execptionMessage));
}

Form::UnsignedFormException::UnsignedFormException(const UnsignedFormException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("This form cannot be executed because it is not signed");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Form::UnsignedFormException &Form::UnsignedFormException::operator=(const UnsignedFormException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}
