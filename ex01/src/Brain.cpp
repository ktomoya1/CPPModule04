#include "Brain.h"

#include <iostream>
#include <string>

Brain::Brain() {
  for (int i = 0; i < 100; ++i) {
    this->setIdea("No idea", i);
  }
  std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
  *this = other;
  std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  for (int i = 0; i < 100; ++i) {
    this->setIdea(other.getIdea(i), i);
  }
  std::cout << "Brain Assignment operator called" << std::endl;
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(const std::string& idea, int index) {
  if (0 <= index && index < 100) {
    this->ideas_[index] = idea;
  }
}

const std::string Brain::getIdea(int index) const {
  if (0 <= index && index < 100) {
    return this->ideas_[index];
  }
  return "";
}
