
#include "Student.h"

Student::Student(int bannerId)
{
   this->bannerId = bannerId;
}

int Student::getBannerId(void)
{
   return bannerId;
}

void Student::setBannerId(int bannerId)
{
   this->bannerId = bannerId;
}
   
