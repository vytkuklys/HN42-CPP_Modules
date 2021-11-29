#include <iostream>

class Contacts
{
    private:
        std::string Names[8];
    public:
        Contacts(std::string name){
            Names[0] = name;
        }

        void getName(){
            std::cout << Names[0] << std::endl;
        }
};
