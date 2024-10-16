#include "Animal.h"

#include <iostream>
#include <string>

Animal::Animal() : type_("default") {
  std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& other) {
  *this = other;
  std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  this->setType(other.getType());
  std::cout << "Animal Assignment operator called." << std::endl;
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal destructor called." << std::endl;
}

void Animal::setType(const std::string& type) {
  this->type_ = type;
}

const std::string& Animal::getType() const {
  return this->type_;
}

void Animal::makeSound() const {
  std::cout << "Animal makes a sound!" << std::endl;
  return;
}
