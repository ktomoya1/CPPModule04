#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Brain.h"

#include <iostream>
#include <string>

int main() {
  const Animal* animals[4];

  for (int i = 0; i < 4; ++i) {
    if (i < 2) {
      animals[i] = new Dog();
    } else {
      animals[i] = new Cat();
    }
  }
  std::cout << std::endl;

  for (int i = 0; i < 4; ++i) {
    delete animals[i];
  }
  std::cout << std::endl;

  Dog* dog = new Dog();

  dog->getBrain()->setIdea("I want to play!", 0);
  Dog* dog_copy = new Dog(*dog);

  std::cout << "dog's idea[0]: " << dog->getBrain()->getIdea(0) << std::endl;
  std::cout << "dog_copy's idea[0]: " << dog_copy->getBrain()->getIdea(0) << std::endl;

  dog_copy->getBrain()->setIdea("I am sleepy...", 0);

  std::cout << "After modifying dog_copy's idea[0]: " << std::endl;
  std::cout << "dog's idea[0]: " << dog->getBrain()->getIdea(0) << std::endl;
  std::cout << "dog_copy's idea[0]: " << dog_copy->getBrain()->getIdea(0) << std::endl;

  delete dog;
  delete dog_copy;
  return 0;
}
