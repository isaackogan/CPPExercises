#pragma once
#include "Pet.h"

class Human : public Pet
{
public:
    explicit Human(const std::string &name);
};
