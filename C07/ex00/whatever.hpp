/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:16:02 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/23 00:46:07 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<class T>
void swap(T &a, T &b);

template<class T>
T &min(T &a, T &b);

template<class T>
T &max(T &a, T &b);
