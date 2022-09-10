#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
   Animal * animal;

   animal = new Dog();
   std::cout << "I am a dog. I like to " 
             << animal->makeSound() << " and "
             << animal->move() << ".\n";

   animal = new Cat();
   std::cout << "I am a cat. I like to " 
             << animal->makeSound() << " and "
             << animal->move() << ".\n";
}
