#include <iostream>
#include <stdlib.h>

int main(int argc, char **argv)
{
    std::string command = "";
    while (command.compare("CLOSE"))
    {
        std::cout << "Enter command to run, type CLOSE to end: " << std::endl;
        std::cin >> command;
        if (!command.compare("CLOSE"))
        {
            break;
        }
        const char * c = command.data();
        system(c);
    }
    return 0;
}