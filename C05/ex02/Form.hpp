/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:25:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 19:03:44 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string Name;
    const std::string Target;
    bool IsSigned;
    const int ExecutingGrade;
    const int SigningGrade;

public:
    Form();
    Form(const Form &original);
    Form(const std::string &name, int const signing_grade, int const executing_grade);
    Form(const std::string &name, const std::string &target, int const signing_grade, int const executing_grade);
    ~Form();

    Form &operator=(const Form &original);
    std::string getName() const;
    std::string getTarget() const;
    bool getIsSigned() const;
    int getExecutingGrade() const;
    int getSigningGrade() const;
    void setIsSigned(bool val);
  
    void execute(Bureaucrat const &executor) const;
    void beSigned(Bureaucrat &Mr);
    virtual void callAction() const = 0;

    class GradeTooLowException : std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(const GradeTooLowException &original);
        GradeTooLowException(const int grade, const int valid);
        GradeTooLowException(std::string exception_message);
        GradeTooLowException(const int grade);
        ~GradeTooLowException()_NOEXCEPT;

        GradeTooLowException &operator=(const GradeTooLowException &original);
    };

    class GradeTooHighException : std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(const GradeTooHighException &original);
        GradeTooHighException(const int grade, const int valid);
        GradeTooHighException(const int grade);
        ~GradeTooHighException()_NOEXCEPT;

        GradeTooHighException &operator=(const GradeTooHighException &original);
        void printshit();
    };

    class UnsignedFormException : std::exception
    {
    public:
        UnsignedFormException();
        UnsignedFormException(const UnsignedFormException &original);
        ~UnsignedFormException()_NOEXCEPT;

        UnsignedFormException &operator=(const UnsignedFormException &original);
    };
};

std::ostream &operator<<(std::ostream &out, const Form &fixed);
