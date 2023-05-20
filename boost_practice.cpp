#include <iostream>
#include <boost>
#include <vector>

int main(int argc, char **argv)
{
    std::string input;
    std::vector<std::string> result;
    std::cout << "Enter any string, add in '.'s randomly :)" << std::endl;
    std::cin >> input;
    boost::split(result, input, boost::is_any_of("."));
    for (int i = 0; i < result.size(); i++)
        std::cout << result[i] << std::endl;
    return 0;
}