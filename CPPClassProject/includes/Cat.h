#pragma once
#include "Pet.h"

class Cat : public Pet
{
    public:
        explicit Cat(const std::string& name);
        std::string type() override;
};
