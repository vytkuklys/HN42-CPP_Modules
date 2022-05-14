/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:33:46 by vkuklys           #+#    #+#             */
/*   Updated: 2021/12/03 18:18:56 by vkuklys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

int getContent(std::string &content, std::string filename)
{
    std::ifstream file(filename);
    char byte = 0;

    if (!file)
    {
        std::cout << "Error occured when opening the file." << std::endl;
        return (1);
    }
    while (file.get(byte))
    {
        content.push_back(byte);
    }
    file.close();
    return (0);
}

int replaceContent(std::string &content, std::string s1, std::string s2)
{
    std::size_t found = content.find(s1);
    while (found != std::string::npos)
    {
        content.erase(found, strlen(s1.c_str()));
        content.insert(found, s2);
        found = content.find(s1);
    }
    return (0);
}

int writeToFile(std::string content, std::string filename)
{
    std::ofstream file;
    filename += ".replace";
    file.open(filename);
    if (!file)
    {
        std::cout << "Error occured when opening the file." << std::endl;
        return (1);
    }
    file << content;
    file.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error invalid argument count." << std::endl;
        return (1);
    }
    std::string content,
                filename = argv[1],
                s1 = argv[2],
                s2 = argv[3];
    if(getContent(content, filename) == 1)
    {
        return (1);
    }
    if (s1[0] && s2[0])
    {
        replaceContent(content, s1, s2);
    }
    writeToFile(content, filename);
    return (0);
}