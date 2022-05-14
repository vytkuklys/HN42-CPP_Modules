/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:15:01 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 19:32:58 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl << "The name is " << bob->getName() << ", " << bob->getName() << " " << bob->getName() << std::endl;
    std::cout << std::endl;
    delete bob;
    std::cout << std::endl;
    delete me;
    std::cout << std::endl;
    delete src;
    return 0;
}