#include <iostream>

class UserInterface
{
public:
    void displayOptions()
    {
        std::cout << "Type one of the following commands:\nEXIT - to exit the phonebook\nADD - to add a contact\nSEARCH - to search a contact." << std::endl;
    }
    void handleSelection(std::string input)
    {
        std::cout << input << endl;
    }
};
