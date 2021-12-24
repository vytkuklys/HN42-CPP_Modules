/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:53:13 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/23 20:21:49 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>

template <class T_arr>
void iter(T_arr *arr, int len, void(*func)(T_arr const &a));

template <class T>
void display(T const &a);