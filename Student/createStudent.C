#include <stdio.h>
#include "Student.h"

int main(void)
{
   Student student(90001234);
   //auto tells the compiler to figure out the type
   //it uses the return type of getBannerId to determine it
   auto bannerId = student.getBannerId();
   printf("%d\n", bannerId);

   student.setBannerId(90004321);
   bannerId = student.getBannerId();
   printf("%d\n", bannerId);
}
