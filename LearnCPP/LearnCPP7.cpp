
#include <array>
#include <iostream>
#include <string>
using std::string;

void printArray(int theArray[], int sizeOfArray)
{
    
    for (int i=0; i < sizeOfArray; i++)
    {
        std::cout << theArray[i] << " ";
    }

    std::cout << std::endl;
}

void printArray2(std::array<int, 3> array) // If you don't know that it's 3, you will need a std::vector or TEMPLATE
{
    // ... do stuff
}

template<int T>
void printArray3(std::array<int, T> &arr)
{
    
    for (int i=0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}

void main7()
{

    // Example 1: Basic
    int bucky[3] = {20, 54, 675};
    printArray(bucky, sizeof(bucky) / sizeof(bucky[0])); // 4 bytes in an integer :D
    printArray(bucky, std::size(bucky)); // We live in the modern world, there's a stdlib tool for this!
    
    // Example 3: Templates
    std::array<int, 3> brenda = {1, 2, 3};
    printArray3(brenda);

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    std::cout << &arr; // &arr -> int (*)[10] -> 0x123123
    std::cout << arr; // arr -> int * -> 0x123123
    
}