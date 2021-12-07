/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:33:20 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/01 07:44:12 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contacts.hpp"

int Contacts::_nbContacts = 0;

std::string *Contacts::getContacts(void)
{
    return (ContactInfo);
}

void Contacts::addString(std::string &str, std::string field)
{
    int valid;

    std::cout << field << " []: ";
    getline(std::cin, str);
    valid = isStringValid(str);
    while (!valid)
    {
        std::cout << "\n~~~" << field << " can only contain alphanumeric characters, apostrophes, commas, dots and spaces~~~" << std::endl
                  << std::endl;
        std::cout << field << " []: ";
        getline(std::cin, str);
        valid = isStringValid(str);
    }
}

void Contacts::addPhoneNumber(std::string &str, std::string field)
{
    int valid;

    std::cout << field << " []: ";
    getline(std::cin, str);
    valid = isPhoneValid(str);
    while (!valid)
    {
        std::cout << field << " []: ";
        getline(std::cin, str);
        valid = isPhoneValid(str);
    }
}

int Contacts::isStringValid(std::string &str)
{
    int len = strlen(str.c_str());

    if (len == 0)
    {
        return (0);
    }
    for (int i = 0; i < len; i++)
    {
        if (!(isalnum(str[i]) || str[i] == ' ' || str[i] == '\'' || str[i] == '.' || str[i] == ','))
        {
            return (0);
        }
    }
    return (1);
}

int Contacts::isPhoneValid(std::string &str)
{
    int len = strlen(str.c_str());

    if (len < 3 || len > 12)
    {
        std::cout << "\n~~~Entered phone number is not valid~~~" << std::endl
                  << std::endl;
        return (0);
    }
    for (int i = 0; i < len; i++)
    {
        if (!(isdigit(str[i]) || (i == 0 && str[i] == '+')))
        {
            std::cout << "\n~~~Entered phone number is not valid. Phone number can only contain digits~~~" << std::endl
                      << std::endl;
            return (0);
        }
    }
    return (1);
}

int Contacts::getNbContacts(void)
{
    return (_nbContacts);
}

Contacts::Contacts()
{
    _nbContacts = 0;
}

void Contacts::addContact()
{
    std::string input[5];
    addString(input[0], "First name");
    addString(input[1], "Last name");
    addString(input[2], "Nickname");
    addPhoneNumber(input[3], "Phone number");
    addString(input[4], "Darkest secret");

    int index = _nbContacts % 8;
    ContactInfo[index + (index * 5)] = std::to_string(index + 1);
    ContactInfo[(index + 1) + (index * 5)] = input[0];
    ContactInfo[(index + 2) + (index * 5)] = input[1];
    ContactInfo[(index + 3) + (index * 5)] = input[2];
    ContactInfo[(index + 4) + (index * 5)] = input[3];
    ContactInfo[(index + 5) + (index * 5)] = input[4];
    std::cout << "\n~~~New contact was added successfully~~~" << std::endl
              << std::endl;
    _nbContacts++;
}
