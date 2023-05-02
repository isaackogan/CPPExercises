#include <array>
#include <deque>
#include <fstream>
#include <iostream>

/*
 * Deques are O(1) at the ends, O(n) on the inside
 * Better than vectors if you are touching the front and ends
 *
 */
void main11()
{
    std::cout << "What did you eat?";
    std::string item;
    std::cin >> item;

    // Declare a file OUTPUT stream
    std::ofstream file("foods.txt");
    file << item;
    file.close(); // Close your damn file

    // Declare a file INPUT stream
    std::ifstream file_in("foods.txt");
    std::string item_in;
    file_in >> item_in;
    
    std::cout << item_in;
    file_in.close();
    
}

