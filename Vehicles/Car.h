#include <iostream>
#include <string>

class Car : public Vehicle
{
   public:
      //inline constructor 
      //simply calls the Vehicle constructor
      inline Car(int p, int f, int m):Vehicle(p, f, m) {}
      //virtual function for polymorphism
      virtual std::string getName();
};

