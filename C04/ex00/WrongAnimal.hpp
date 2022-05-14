/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:37:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:12:45 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>

class WrongAnimal
{
protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &original);
  ~WrongAnimal();

  void operator=(const WrongAnimal &original);
  void makeSound() const;
  std::string getType() const;
};

#endif