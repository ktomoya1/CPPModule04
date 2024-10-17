#pragma once

#include "Animal.h"
#include "Brain.h"

#include <iostream>
#include <string>

class Cat : public Animal {
  public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void   makeSound() const;
    void   setBrain(Brain* brain);
    Brain* getBrain() const;

  private:
    Brain* brain_;
};
