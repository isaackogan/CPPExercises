#include "Pet.h"

#include <iostream>


Pet::Pet(const std::string& name)
{
    this->name_ = name;
}

bool Pet::operator==(const Pet& other) const
{
    return this->name_ == other.name_;
}

std::string Pet::get_name()
{
    return this->name_;
}



int Pet::find(const std::vector<Pet>& animals, const Pet &animal)
{

    for (int i=0; i < static_cast<int>(animals.size()); i++)
    {
        if (animals[i] == animal)
        {
            return i;
        }

    }
    
    return -1;

}

std::string Pet::type()
{
    return "I am an animal!";
}



