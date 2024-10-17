#pragma once

#include <iostream>
#include <string>

class Animal {
  public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    void setType(const std::string& type);
    const std::string& getType() const;
    virtual void makeSound() const = 0;

  protected:
    std::string type_;
};
