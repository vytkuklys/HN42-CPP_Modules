/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:37:10 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/12 16:05:12 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
  std::string type;

public:
  Animal();
  Animal(const Animal &original);
  virtual ~Animal();

  void operator=(const Animal &original);
  virtual void makeSound() const;
  std::string getType() const;
};

#endif