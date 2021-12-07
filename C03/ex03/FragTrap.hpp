/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:44:54 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/06 21:31:27 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
};