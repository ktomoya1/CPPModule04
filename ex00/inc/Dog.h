#pragma once

#include "Animal.h"

#include <iostream>
#include <string>

class Dog : public Animal {
  public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;
};
