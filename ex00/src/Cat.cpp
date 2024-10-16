#include "Cat.h"

#include "Animal.h"

#include <iostream>
#include <string>

Cat::Cat() {
  this->setType("Cat");
  std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
  *this = other;
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  this->setType(other.getType());
  std::cout << "Cat Assignment operator called." << std::endl;
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
  std::cout << "Meow!" << std::endl;
}
