/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:49:26 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:28:43 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    void karenFilter(std::string level);
    ~Karen(void);
};

#endif
