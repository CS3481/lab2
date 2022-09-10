#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"

int main()
{
   Vehicle * bus, * car;
   bus = new Bus(50, 80, 6); //passengers, fuel capacity, mpg
   bus->outputSpecs();

   car = new Car(5, 20, 35);
   car->outputSpecs();
}
