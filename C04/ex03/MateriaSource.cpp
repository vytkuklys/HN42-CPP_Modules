/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:11:54 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 19:23:22 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        Source[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
    {
        if (Source[i] != NULL)
        {
            delete Source[i];
            Source[i] = NULL;
        }
    }
    std::cout << "MateriaSource destructor was called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (Source[i] == NULL)
        {
            Source[i] = materia;
            std::cout << i << ", " << materia->getType() << std::endl;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    if (type.compare("ice") != 0 && type.compare("cure") != 0)
    {
        return (NULL);
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (Source[i]->getType().compare(type) == 0)
        {
            return (Source[i]->clone());
        }
    }
    return (NULL);
}