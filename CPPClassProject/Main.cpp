
#include <iostream>
#include <vector>

#include "includes/Cat.h"
#include "includes/Human.h"
#include "includes/Pet.h"
/*
 * Purpose of this is to practice the following:
 * - Header files
 * - References & Pointers
 * - OOP in C++
 * - Modularity
 *
 * The exercise is to create a simple program to define an Animal class and then sublcass with different types
 */
int main()
{
    
    auto cat = Cat("Fluffy");
    auto me = Human("Isaac");
    
    std::vector<Pet> pets = {
        cat, me
    };
    
    for (auto &pet : pets)
    {
        std::cout << pet.type();
    }
    
    return 0;
}
