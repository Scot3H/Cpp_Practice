#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int main(int argc, char *argv[])
{
    int a, size;
    std::cout << "Enter size of array" << std::endl;
    std::cin >> size; 
    std::cout << "Enter values" << std::endl;
    std::vector<int> user_input;
    for (int i = 0; i < size; i++)
    {
        if (!std::cin)
        {
            std::cout << "Bad value!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> a;
        }
        std::cin >> a;
        user_input.push_back(a);
    }
    std::cout << "Maximum is: " << *std::max_element(std::begin(user_input), std::end(user_input)) << std::endl;
    return 0;
}