#include <iostream>
#include <string>

class Vehicle
{
   private:
      int passengers;    //number of passengers
      int fuelCapacity;  //fuel capacity in gallons
      int mpg;           //miles per gallon
   public:
      Vehicle(int p, int f, int m);
      //virtual (for polymorphism) and abstract (define in derived classes)
      virtual std::string getName() = 0;
      int range();
      double fuelNeeded(int miles);
      void outputSpecs();
};

