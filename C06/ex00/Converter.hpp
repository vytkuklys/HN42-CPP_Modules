/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 21:11:19 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/22 18:02:14 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

class Converter
{
private:
    void isConvertable(const std::string &input);
    int isInt(const std::string &input);
    bool isIntWithinRange(const std::string &input);
    bool isScientific(const std::string &input);
    bool isScientificDouble(const std::string &input);
    void convertFromInt(const std::string &input);
    void convertFromDouble(const std::string &input);
    void convertFromFloat(const std::string &input);
    void convertFromChar(const std::string &input);

public:
    Converter();
    Converter(const Converter &original);
    Converter(const std::string &name, int const grade);
    ~Converter();

    Converter &operator=(const Converter &original);
    void convertFromString(const std::string &input);

    class InvalidInputException : std::exception
    {
    public:
        InvalidInputException();
        InvalidInputException(const InvalidInputException &original);
        InvalidInputException(const int grade, const int valid);
        InvalidInputException(const int grade);
        ~InvalidInputException()_NOEXCEPT;

        InvalidInputException &operator=(const InvalidInputException &original);
    };
};
