/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:11:57 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 19:19:04 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *Source[4];
    public:
        MateriaSource();
        ~MateriaSource();
        virtual void learnMateria(AMateria *materia);
        virtual AMateria *createMateria(std::string const &type);
};
