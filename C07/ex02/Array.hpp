/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:42:21 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/23 20:37:15 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
class Array
{
private:
    T *Elements;
    unsigned int Size;

public:
    Array<T>();
    Array<T>(unsigned int n);
    Array<T>(const Array<T> &copy);
    ~Array();

    Array<T> &operator=(const Array<T> &replacement);
    T operator[](const unsigned int index) const;
    T &operator[](const unsigned int index);
    unsigned int size() const;

    class OutOfLimitsException : std::exception
    {
    public:
        OutOfLimitsException();
        OutOfLimitsException(const OutOfLimitsException &original);
        ~OutOfLimitsException() _NOEXCEPT;

        OutOfLimitsException &operator=(const OutOfLimitsException &original);
    };
};

template <class T>
Array<T>::Array()
{
    Size = 0;
    Elements = new T[Size];
}

template <class T>
Array<T>::Array(unsigned int n) : Size(n)
{
    Elements = new T[Size];
}

template <class T>
Array<T>::Array(const Array<T> &copy)
{
    Size = copy.Size;
    Elements = new T[Size];
    for (unsigned int i = 0; i < Size; i++)
    {
        Elements[i] = copy.Elements[i];
    }
}

template <class T>
Array<T>::~Array()
{
    delete [] Elements;
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &replacement)
{
    if (this != replacement)
    {
        if (Size != replacement.Size)
        {
            delete[] Elements;
            Elements = new T[replacement.Size];
        }
        for (unsigned int i = 0; i < replacement.Size; i++)
        {
            Elements[i] = replacement.Elements[i];
        }
    }
    return (*this);
}

template <class T>
T Array<T>::operator[](const unsigned int index) const
{
    if (index >= Size)
        Array<T>::OutOfLimitsException();
    return (Elements[index]);
}

template <class T>
T &Array<T>::operator[](const unsigned int index)
{
    if (index >= Size)
        Array<T>::OutOfLimitsException();
    return (Elements[index]);
}

template <class T>
unsigned int Array<T>::size() const
{
    return (Size);
}
template <class T>
Array<T>::OutOfLimitsException::~OutOfLimitsException() _NOEXCEPT {}
template <class T>
Array<T>::OutOfLimitsException::OutOfLimitsException()
{
    std::string execptionMessage("Exception: This index cannot cannot be accessed. It is out of limits.");
    throw(std::invalid_argument(execptionMessage));
}
template <class T>
Array<T>::OutOfLimitsException::OutOfLimitsException(const OutOfLimitsException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Exception: This index cannot cannot be accessed. It is out of limits.");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}
template <class T>
typename Array<T>::OutOfLimitsException &Array<T>::OutOfLimitsException::operator=(const OutOfLimitsException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}
