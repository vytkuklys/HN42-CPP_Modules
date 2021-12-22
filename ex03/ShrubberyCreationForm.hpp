/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:53 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 20:27:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
public:
    ShrubberyCreationForm(); 
    ShrubberyCreationForm(const ShrubberyCreationForm &original);
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    virtual void callAction() const;
};