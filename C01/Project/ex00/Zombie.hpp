/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:59:14 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:23:47 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Zombie
{
private:
    std::string Name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
    Zombie *newZombie(std::string name);
    void randomChump(std::string name);
};

#endif
