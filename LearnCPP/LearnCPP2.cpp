#include <iostream>

using std::string;

std::string lowerstring(std::string& input)
{
    string result;
    for (int i=0; i < static_cast<int>(input.length()); i++)
    {
        result += static_cast<char>(std::tolower(input[i]));
    }

    return result;
}


void main2()
{

    std::cout << "Do you want to play a game? (y/n): ";
    const char response = static_cast<char>(std::getchar());

    if (response == 'y')
    {
        // output
        std::cout << "Let's play a game, then...\n";
        std::cout << "What level of difficulty? (easy/medium/hard): ";

        // set diff
        string difficulty;
        std::cin >> difficulty;
        difficulty = lowerstring(difficulty);
        
        if (difficulty == "easy")
        {
            std::cout << "ezpz";
        }
        else if (difficulty == "medium")
        {
            std::cout << "mdpz";
        }
        else if (difficulty == "hard")
        {
            std::cout << "hard like me";
        }
        else
        {
            std::cout << "Dumbass, pick a reasonable answer";
        }
        
    }
    
}
