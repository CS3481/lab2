#include <iostream>
#include <string>

class Dog : public Animal
{
   public:
      virtual std::string makeSound();
      virtual std::string move();
};

