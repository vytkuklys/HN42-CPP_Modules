/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:39:53 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/15 18:21:00 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &original);
    ~PresidentialPardonForm();

    // PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
    virtual void callAction();
};
