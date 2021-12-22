/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:50:26 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 21:02:53 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base *generate(void)
{
    Base *ptrs[] = {new A(), new B(), new C()};
    std::srand((unsigned int)std::time(nullptr));

    int random = rand() % 3;
    return (ptrs[random]);
}
void identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (a)
    {
        a->introduce();
    }
    else if (b)
    {
        b->introduce();
    }
    else if (c)
    {
        c->introduce();
    }
}
void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        a.introduce();
        return;
    }
    catch (...)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        b.introduce();
        return;
    }
    catch (...)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        c.introduce();
        return;
    }
    catch (...)
    {
    }
}