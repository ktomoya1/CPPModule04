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
    if (i < 5) {
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
}
