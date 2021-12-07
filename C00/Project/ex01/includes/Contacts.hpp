/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:39:32 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/01 07:40:10 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Contacts
{
public:
    Contacts(void);

    void addContact(void);

    std::string *getContacts(void);
    int getNbContacts(void);

private:
    static int _nbContacts;
    std::string ContactInfo[48];

    void addString(std::string &str, std::string field);
    void addPhoneNumber(std::string &str, std::string field);
    int isStringValid(std::string &str);
    int isPhoneValid(std::string &str);
};
