#include "Dog.h"

#include "Animal.h"
#include "Brain.h"

#include <iostream>
#include <string>

Dog::Dog() {
  this->setBrain(new Brain());
  this->setType("Dog");
  std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other) {
  *this = other;
  std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    delete this->getBrain();
    this->setBrain(new Brain(*other.getBrain())); // deep copy
    //this->setBrain(other.getBrain()); // shallow copy
    this->setType(other.getType());
  }
  std::cout << "Dog Assignment operator called." << std::endl;
  return *this;
}

Dog::~Dog() {
  delete this->getBrain();
  this->setBrain(NULL);
  std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
  std::cout << "Woof!" << std::endl;
}

void Dog::setBrain(Brain* brain) {
  this->brain_ = brain;
}

Brain* Dog::getBrain() const {
  return this->brain_;
}
