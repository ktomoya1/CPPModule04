#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Brain.h"

#include <iostream>
#include <string>

int main() {
//  const Animal* meta = new Animal();
//  meta->makeSound();
//  delete meta;

  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();

  delete j;
  delete i;
  std::cout << std::endl;

  const WrongAnimal* k = new WrongCat();
  std::cout << k->getType() << " " << std::endl;
  k->makeSound();
  delete k;

  return 0;
}
