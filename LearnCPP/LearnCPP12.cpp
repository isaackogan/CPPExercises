#include <array>
#include <deque>
#include <fstream>
#include <iostream>

/*
 * Writing a collection to a file
 */ 
void main12()
{

    std::deque<std::string> foods = {"lemons", "cheesecake", "salmon"};

    std::ofstream file("foods.txt");
    for (auto &food : foods)
    {
        file << food << std::endl;
    }

    file.close();
    
}

