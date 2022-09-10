#include <iostream>
#include <string>

class Cat : public Animal
{
   public:
      virtual std::string makeSound();
      virtual std::string move();
};

