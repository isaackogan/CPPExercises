
#include <iostream>
#include <string>
#include <array>
using std::string;

void main3()
{
    std::array<string, 3> foods = {"a", "b", "c"};

    for (auto& food : foods)
    {   
        std::cout << food << std::endl;
    }
    
}
