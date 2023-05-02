#pragma once
#include <iostream>
#include <string>
#include <vector>

class Pet {
    
    std::string name_; // Private by DEFAULT. In a struct, it would be PUBLIC by default. This is the only diff.

    public:
        explicit Pet(const std::string &name);
        static int find(const std::vector<Pet> &animals, const Pet &animal);
        bool operator== (const Pet &other) const; // Overload equals
        std::string get_name();
        virtual std::string type();
    
};




