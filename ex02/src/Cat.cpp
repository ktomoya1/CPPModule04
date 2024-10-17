#include "Cat.h"

#include "Animal.h"
#include "Brain.h"

#include <iostream>
#include <string>

Cat::Cat() {
  this->setBrain(new Brain());
  this->setType("Cat");
  std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) {
  *this = other;
  std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    delete this->getBrain();
    this->setBrain(new Brain(*other.getBrain())); // deep copy
    //this->setBrain(other.getBrain()); // shallow copy
    this->setType(other.getType());
  }
  std::cout << "Cat Assignment operator called." << std::endl;
  return *this;
}

Cat::~Cat() {
  delete this->getBrain();
  this->setBrain(NULL);
  std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
  std::cout << "Meow!" << std::endl;
}

void Cat::setBrain(Brain* brain) {
  this->brain_ = brain;
}

Brain* Cat::getBrain() const {
  return this->brain_;
}
