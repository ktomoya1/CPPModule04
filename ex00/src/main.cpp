#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

#include <iostream>
#include <string>

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();
  const WrongAnimal* k = new WrongCat();
  std::cout << k->getType() << " " << std::endl;
  k->makeSound();

  delete meta;
  delete j;
  delete i;
  delete k;
  return 0;
}
