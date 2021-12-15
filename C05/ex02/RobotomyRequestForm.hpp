/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:53 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 00:02:28 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &original);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &original);
    void    callAction();
    int     getRandom();
};
