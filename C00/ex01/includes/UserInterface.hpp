/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 07:03:44 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/01 08:24:03 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contacts.hpp"

class UserInterface
{
private:
    Contacts Contacts;
    std::string *contact_list;

    void exitInterface();
    void searchContact(void);
    void displayContacts();
    void displayIndex(int index);
    int getIndex();
    int isIndexValid(std::string input);

public:
    void displayOptions();
    void handleSelection(std::string input);
    void showPrompt();
    
    UserInterface(void);
};
