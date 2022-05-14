/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:33:26 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/01 08:38:52 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/UserInterface.hpp"

UserInterface::UserInterface(void)
{
    contact_list = Contacts.getContacts();
}

void UserInterface::exitInterface()
{
    exit(0);
}

void UserInterface::displayOptions()
{
    std::cout << "Type one of the following commands:\n\nEXIT   - to exit the phonebook\nADD    - to add a contact\nSEARCH - to search a contact\n"
              << std::endl;
}

void UserInterface::handleSelection(std::string input)
{
    if (strcmp(input.c_str(), "EXIT") == 0)
    {
        exitInterface();
    }
    else if (strcmp(input.c_str(), "ADD") == 0)
    {
        Contacts.addContact();
        contact_list = Contacts.getContacts();
    }
    else if (strcmp(input.c_str(), "SEARCH") == 0)
    {
        searchContact();
    }
    else
    {
        std::cout << "\n~~~Invalid command: " << input << "~~~" << std::endl
                  << std::endl;
    }
}

void UserInterface::showPrompt()
{
    std::cout << "Enter a command: ";
}

void UserInterface::displayContacts()
{
    int nbContacts = Contacts.getNbContacts();
    std::cout << "\n|" << std::setw(44) << std::setfill('-') << "|" << std::endl;
    std::cout << "|" << std::setw(10) << std::setfill('.') << "ID"
              << "|" << std::setw(10) << "FIRST NAME"
              << "|" << std::setw(10) << "LAST NAME"
              << "|" << std::setw(10) << "NICKNAME"
              << "|" << std::endl;
    for (int i = 0; i < nbContacts && i < 8; i++)
    {
        std::cout << "|" << std::setw(10) << std::setfill('.') << i + 1;
        for (int j = 1; j < 4; j++)
        {
            if (strlen(contact_list[j + (i * 6)].c_str()) >= 10)
            {
                std::cout << "|" << std::setw(9) << std::setfill('.') << contact_list[j + (i * 6)].substr(0, 9) << ".";
            }
            else
            {
                std::cout << "|" << std::setw(10) << std::setfill('.') << contact_list[j + (i * 6)];
            }
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "|" << std::setw(45) << std::setfill('-') << "|\n"
              << std::endl;
}

int UserInterface::getIndex()
{
    int valid;
    std::string input;
    std::cout << "Enter index: ";
    getline(std::cin, input);

    valid = isIndexValid(input);
    while (!valid)
    {
        std::cout << "Enter index: ";
        getline(std::cin, input);
        valid = isIndexValid(input);
    }
    return (atoi(input.c_str()));
}

int UserInterface::isIndexValid(std::string input)
{
    int num = atoi(input.c_str());
    if (!isdigit(input[0]) || num <= 0 || num > 8 || contact_list[num - 1 + ((num - 1) * 5)] != input)
    {
        std::cout << "\n~~~Entered index is invalid~~~" << std::endl
                  << std::endl;
        return (0);
    }
    return (1);
}

void UserInterface::displayIndex(int index)
{
    std::cout << "\nId: " << index << std::endl;
    std::cout << "First name: " << contact_list[1 + ((index - 1) * 6)] << std::endl;
    std::cout << "Last name: " << contact_list[2 + ((index - 1) * 6)] << std::endl;
    std::cout << "Nickname: " << contact_list[3 + ((index - 1) * 6)] << std::endl;
    std::cout << "Phone number: " << contact_list[4 + ((index - 1) * 6)] << std::endl;
    std::cout << "Darkest secret: " << contact_list[5 + ((index - 1) * 6)] << std::endl
              << std::endl;
}

void UserInterface::searchContact()
{
    displayContacts();
    displayIndex(getIndex());
}

int main(void)
{
    UserInterface Phonebook;
    std::string input;

    Phonebook.displayOptions();
    while (1)
    {
        Phonebook.showPrompt();
        getline(std::cin, input);
        Phonebook.handleSelection(input);
    }
    return (0);
}