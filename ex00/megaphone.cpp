#include <iostream>

class Megaphone
{
public:
    std::string Message;

    void echoMessage()
    {
        std::cout << Message << std::endl;
    }

    void setDefaultMessage(){
        Message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    void rewriteMessage(int argc, char **argv)
    {
        int i, j, k;
    
        i = 1;
        while (i < argc)
        {
            std::string arg(argv[i]);
            j = arg.find_first_not_of(" \t");
            k = strlen(arg.c_str()) - (strlen(arg.c_str()) - arg.find_last_not_of(" \t"));
            while (argv[i][j] != '\0' && j <= k)
            {
                Message += toupper(argv[i][j]);
                j++;
            }
            Message += " ";
            i++;
        }
    }
};

int main(int argc, char **argv)
{
    Megaphone message;
    int i;
    int j;
    int k;
    i = 1;
    if (argc == 1)
        message.setDefaultMessage();
    else
        message.rewriteMessage(argc, argv);
    message.echoMessage();
    return (0);
}