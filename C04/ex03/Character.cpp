/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:14:28 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 19:25:12 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : Name(name)
{
    for (int i = 0; i < 4; i++)
    {
        idx[i] = false;
        items[i] = NULL;
    }
    std::cout << "Character constructor was called" << std::endl;
}

Character::Character(const Character &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.idx[i] == true)
        {
            this->items[i] = other.items[i]->clone();
            idx[i] = true;
        }
        else
        {
            this->items[i] = NULL;
            idx[i] = false;
        }
    }
    Name = other.Name;
    std::cout << "Character constructor was called" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (idx[i] == true)
        {
            delete items[i];    
            items[i] = NULL;
        }
    }
    std::cout << "Character destructor was called" << std::endl;
}

std::string const &Character::getName() const
{
    return (Name);
}

void Character::operator=(const Character &original)
{
    for (int i = 0; i < 4; i++)
    {
        if (original.idx[i] == true)
        {
            this->items[i] = original.items[i]->clone();
            idx[i] = true;
        }
        else
        {
            this->items[i] = NULL;
            idx[i] = false;
        }
    }
    Name = original.Name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (idx[i] == false)
        {
            items[i] = m;
            idx[i] = true;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        return ;
    }
    this->idx[idx] = false;
    items[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if ((idx < 0 || idx > 3) || items[idx] == NULL)
    {
        return ;
    }
    items[idx]->use(target);
}
