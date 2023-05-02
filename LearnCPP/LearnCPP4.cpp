
#include <iostream>
#include <string>
#include <vector>
using std::string;

void inserting()
{
    std::vector<int> v1 = {1, 2, 3};
    v1.insert(v1.begin() + 1, -3); // at index 1, val -3
    std::cout << v1[1]; // idx 1
}

void main4()
{

    std::vector<int> v1 = {1, 2, 3, 4};

    // Iterate 1
    for (const auto& i : v1)
    {
        std::cout << i << std::endl; 
    }

    // Iterate 2 (dec; check; change)
    for (int i = 0; i < static_cast<int>(v1.size()); i++)
    {
        std::cout << i << std::endl;
    }

    // Iterate 3 (dec; check; change)
    for (auto itr = v1.begin(); itr != v1.end(); ++itr)
    {
        std::cout << *itr << std::endl;
    }

    
    // i++ is POSTFIX, used and THEN incremented
    // ++i is PREFIX, incremented THEN used
    // REGARDLESS of either, i will be +1 after the statement! But for THAT statement, we can choose
}