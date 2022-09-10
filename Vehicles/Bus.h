#include <iostream>
#include <string>

class Bus : public Vehicle
{
   public:
      //inline constructor (compiler puts code where the constructor is invoked)
      //constructor simply invokes the Vehicle constructor
      inline Bus(int p, int f, int m):Vehicle(p, f, m) {}
      //virtual function for polymorphism
      virtual std::string getName();
};

