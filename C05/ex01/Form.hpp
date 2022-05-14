/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:25:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/16 18:50:48 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string Name;
    bool IsSigned;
    const int ExecutingGrade;
    const int SigningGrade;

public:
    Form();
    Form(const Form &original);
    Form(const std::string &name, int const signing_grade, int const executing_grade);
    ~Form();

    Form &operator=(const Form &original);
    std::string getName() const;
    class GradeTooLowException : std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(const GradeTooLowException &original);
        GradeTooLowException(const int grade, const int valid);
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
    int getSigningGrade() const;
    int getExecutingGrade() const;
    bool getIsSigned() const;
    void beSigned(Bureaucrat &Mr);
};

std::ostream &operator<<(std::ostream &out, const Form &fixed);
