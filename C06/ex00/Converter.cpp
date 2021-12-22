/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 21:11:15 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 21:04:12 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONSTRUCTORS/OVERLOADS/DESTRUCTORS
Converter::Converter()
{
}

Converter::Converter(const Converter &original)
{
    *this = original;
}

Converter &Converter::operator=(const Converter &original)
{
    if (this != &original)
    {
    }
    return (*this);
}

Converter::~Converter() {}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~METHOD IMPLEMENTATIONS
void Converter::convertFromString(const std::string &input)
{
    isConvertable(input);
    if (!isScientific(input) && isInt(input))
    {
        convertFromInt(input);
    }
    else if (std::strlen(input.c_str()) == 1 && (input[0] >= 32 && input[0] <= 127))
    {
        convertFromChar(input);
    }
    else if (!isScientificDouble(input) && input[std::strlen(input.c_str()) - 1] == 'f')
    {
        convertFromFloat(input);
    }
    else
    {
        convertFromDouble(input);
    }
}

void Converter::convertFromDouble(const std::string &input)
{
    double d = std::atof(input.c_str());
    float f;
    int i;
    char c;

    f = static_cast<double>(d);
    i = static_cast<double>(d);
    c = static_cast<double>(d);

    if (isScientific(input) || (d > 2147483647.0 || d < -2147483648.0))
    {
        std::cout << "char: impossible";
        std::cout << "\nint: impossible";
    }
    else
    {
        std::cout << "char: " << ((c < 32 || c > 127) ? "Non displayable" : std::string() + "'" + c + "'");
        std::cout << "\nint: " << i;
    }
    (f == static_cast<int>(f)) ? std::cout << "\nfloat: " << f << ".0f" : std::cout << "\nfloat: " << f << "f";
    (d == static_cast<int>(d)) ? std::cout << "\ndouble: " << d << ".0" : std::cout << "\ndouble: " << d << std::endl;
}

void Converter::convertFromFloat(const std::string &input)
{
    float f = static_cast<float>(std::atof(input.c_str()));
    double d;
    char c;
    int i;

    d = static_cast<float>(f);

    if (isScientific(input) || (d > 2147483647.0 || d < -2147483648.0))
    {
        std::cout << "char: impossible";
        std::cout << "\nint: impossible";
    }
    else
    {
        i = static_cast<float>(f);
        c = static_cast<float>(f);
        std::cout << "char: " << ((c < 32 || c > 127) ? "Non displayable" : std::string() + "'" + c + "'");
        std::cout << "\nint: " << i;
    }
    (f == static_cast<int>(f)) ? std::cout << "\nfloat: " << f << ".0f" : std::cout << "\nfloat: " << f << "f";
    (d == static_cast<int>(d)) ? std::cout << "\ndouble: " << d << ".0" : std::cout << "\ndouble: " << d << std::endl;
}

void Converter::convertFromChar(const std::string &input)
{
    char c = input[0];
    double d;
    float f;
    int i;

    d = static_cast<char>(c);
    i = static_cast<char>(c);
    f = static_cast<char>(c);

    std::cout << "char: " << ((c < 32 || c > 127) ? "Non displayable" : std::string() + "'" + c + "'");
    std::cout << "\nint: " << i;
    (f == static_cast<int>(f)) ? std::cout << "\nfloat: " << f << ".0f" : std::cout << "\nfloat: " << f << "f";
    (d == static_cast<int>(d)) ? std::cout << "\ndouble: " << d << ".0" : std::cout << "\ndouble: " << d << std::endl;
}

void Converter::convertFromInt(const std::string &input)
{
    if (!isIntWithinRange(input)) Converter::InvalidInputException();

    int i = std::atoi(input.c_str());
    float f;
    double d;
    char c;

    f = static_cast<int>(i);
    d = static_cast<int>(i);
    c = static_cast<int>(i);

    std::cout << "char: " << ((c < 32 || c > 127) ? "Non displayable" : std::string() + "'" + c + "'");
    std::cout << "\nint: " << i;
    (f == static_cast<int>(f)) ? std::cout << "\nfloat: " << f << ".0f" : std::cout << "\nfloat: " << f << "f";
    (d == static_cast<int>(d)) ? std::cout << "\ndouble: " << d << ".0" : std::cout << "\ndouble: " << d << std::endl;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CHECKERS

int Converter::isInt(const std::string &input)
{
    int i = 0;
    while (isdigit(input[i]) || ((input[i] == '-' || input[i] == '+') && i == 0))
    {
        i++;
    }
    if (input[i] == '.')
    {
        if (input[i] && isdigit(input[i + 1]))
        {
            return (0);
        }
    }
    return (i >= 1) ? 1 : 0;
}

void Converter::isConvertable(const std::string &input)
{
    int len = input.length();
    int sign = 0;
    if (isScientific(input))
    {
        return;
    }
    for (int i = 0; i < len; i++)
    {
        if (!((isdigit(input[i]) || input[i] == '-' || input[i] == '+') || (i >= 1 && input[i] == '.')))
        {
            if ((size_t)(i + 1) == std::strlen(input.c_str()) && input[i] == 'f')
            {
                break;
            }
            else if (len > 1)
            {
                Converter::InvalidInputException();
            }
        }
        if (input[i] == '-' || input[i] == '+')
        {
            sign++;
            if (sign > 1)
            {
                Converter::InvalidInputException();
            }
        }
        if (sign)
        {
            continue;
        }
    }
}

bool Converter::isScientific(const std::string &input)
{
    return (input.compare("nan") == 0 || input.compare("nanf") == 0 || input.compare("-inf") == 0 || input.compare("+inf") == 0 || input.compare("-inff") == 0 || input.compare("+inff") == 0);
}

bool Converter::isScientificDouble(const std::string &input)
{
    return (input.compare("nan") == 0 || input.compare("-inf") == 0 || input.compare("+inf") == 0);
}

bool Converter::isIntWithinRange(const std::string &input)
{
    int tmp = 0;
    int len = input.length();

    for (int i = 0; i < len; i++)
    {
        if (isdigit(input[i]))
        {
            tmp = tmp * 10 + (input[i] - '0');
        }
        if (tmp >= 214748364 && ((input[i + 1] > 56 || (input[0] != '-' && input[i + 1] > 55)) || len - i > 2))
        {
            return (false);
        }
    }
    return true;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~EXCEPTIONS

Converter::InvalidInputException::~InvalidInputException() _NOEXCEPT {}

Converter::InvalidInputException::InvalidInputException()
{
    std::string execptionMessage("Input is invalid and cannot be converted");
    throw(std::invalid_argument(execptionMessage));
}

Converter::InvalidInputException::InvalidInputException(const InvalidInputException &original)
{
    if (this != &original)
    {
        std::string execptionMessage("Input is invalid and cannot be converted");
        throw(std::invalid_argument(execptionMessage));
        *this = original;
    }
}

Converter::InvalidInputException &Converter::InvalidInputException::operator=(const InvalidInputException &original)
{
    if (this != &original)
    {
    }
    return (*this);
}
