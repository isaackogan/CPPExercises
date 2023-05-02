#include "Cat.h"

#include <iostream>


Cat::Cat(const std::string& name) : Pet(name)
{
    
}

std::string Cat::type()
{
    return "I am a cat!";
}





