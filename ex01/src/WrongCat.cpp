#include "WrongCat.h"

#include "WrongAnimal.h"

#include <iostream>
#include <string>

WrongCat::WrongCat() {
  this->setType("WrongCat");
  std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
  *this = other;
  std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  this->setType(other.getType());
  std::cout << "WrongCat Assignment operator called." << std::endl;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "Meow!" << std::endl;
}
