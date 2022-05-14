/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:33:23 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 18:55:31 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string Name;
    AMateria *items[4];
    bool idx[4];
public:
    Character(std::string const &name);
    Character(const Character &other);
    ~Character();

    void operator=(const Character &original);
    std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};