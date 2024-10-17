#include "WrongAnimal.h"

#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() : type_("default") {
  std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  *this = other;
  std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  this->setType(other.getType());
  std::cout << "WrongAnimal Assignment operator called." << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::setType(const std::string& type) {
  this->type_ = type;
}

const std::string& WrongAnimal::getType() const {
  return this->type_;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal makes a sound!" << std::endl;
  return;
}
