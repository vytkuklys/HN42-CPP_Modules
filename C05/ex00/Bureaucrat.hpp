/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:25:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/13 18:58:16 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
    
        GradeTooLowException &operator=(const GradeTooLowException &original);
    };

    class GradeTooHighException: std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(const GradeTooHighException &original);
        GradeTooHighException(const int grade);
    
        GradeTooHighException &operator=(const GradeTooHighException &original);
        void printshit();
    };
    Bureaucrat &operator=(const Bureaucrat &original);
    Bureaucrat operator++();
    Bureaucrat operator++(int i);
    Bureaucrat operator--();
    Bureaucrat operator--(int i);
    std::string getName() const;
    int getGrade() const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fixed);
