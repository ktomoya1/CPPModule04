#pragma once

#include "Animal.h"
#include "Brain.h"

#include <iostream>
#include <string>

class Dog : public Animal {
  public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void   makeSound() const;
    void   setBrain(Brain* brain);
    Brain* getBrain() const;

  private:
    Brain* brain_;
};
