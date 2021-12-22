/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:25:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 17:19:00 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
private:
    const std::string Name;
    int Grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &original);
    Bureaucrat(const std::string &name, int const grade);
    ~Bureaucrat();

    class GradeTooLowException : std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(const GradeTooLowException &original);
        GradeTooLowException(const int grade);
        ~GradeTooLowException()_NOEXCEPT;

        GradeTooLowException &operator=(const GradeTooLowException &original);
    };

    class GradeTooHighException: std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(const GradeTooHighException &original);
        GradeTooHighException(const int grade);
        ~GradeTooHighException()_NOEXCEPT;

        GradeTooHighException &operator=(const GradeTooHighException &original);
    };
    Bureaucrat &operator=(const Bureaucrat &original);
    Bureaucrat operator++();
    Bureaucrat operator++(int i);
    Bureaucrat operator--();
    Bureaucrat operator--(int i);
    std::string getName() const;

    void signForm(int i, const std::string &form) const;
    void executeForm(Form const &form);    
    int getGrade() const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fixed);
