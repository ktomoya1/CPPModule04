#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();

    void setType(const std::string& type);
    const std::string& getType() const;
    void makeSound() const;

  protected:
    std::string type_;
};
