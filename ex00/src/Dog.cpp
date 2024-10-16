#include "Dog.h"

#include "Animal.h"

#include <iostream>
#include <string>

Dog::Dog() {
  this->setType("Dog");
  std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
  *this = other;
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  this->setType(other.getType());
  std::cout << "Dog Assignment operator called." << std::endl;
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
  std::cout << "Woof!" << std::endl;
}
