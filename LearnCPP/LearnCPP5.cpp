
#include <iostream>
#include <string>
#include <vector>
using std::string;



/*
 * Bitwise Operators
 * https://www.youtube.com/watch?v=KXwRt7og0gI
 */
void main5()
{

    constexpr int a = 1;
    
    std::cout << (a << 1) << std::endl; // times 2^n (doubling n times), n=1
    std::cout << (a << 4) << std::endl; // double it twice
    std::cout << (64 >> 2) << std::endl; // halve twice = 16
    
}