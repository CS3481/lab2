#include <iostream>
#include <string>
#include "Vehicle.h"

Vehicle::Vehicle(int p, int f, int m)
{
   passengers = p;
   fuelCapacity = f;
   mpg = m;
}

int Vehicle::range()
{
   return mpg * fuelCapacity;
}

double Vehicle::fuelNeeded(int miles)
{
   return (double) miles / mpg;
}   

void Vehicle::outputSpecs()
{
   std::cout << getName() << ":\n";
   std::cout << "\tPassengers: " << passengers << "\n";
   std::cout << "\tFuel Capacity: " << fuelCapacity << " gallons\n";
   std::cout << "\tMileage: " << mpg << " miles per gallon\n";
}

