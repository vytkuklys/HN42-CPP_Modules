/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:19:53 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/05 16:45:19 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class test
{
private:
    int value;

public:
    test()
    {
        value = 1;
    }
    int getVal() const{
        return (2);
    }
};
std::ostream &operator<<(std::ostream &out, const test &fixe)
{
    out << fixe.getVal();
    return (out);
}
int main(void)
{
    test t;

    std::cout << t;
    return (0);
}