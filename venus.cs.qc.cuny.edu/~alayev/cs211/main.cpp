// main.cpp (Test results for quiz 1)

// Author: Yosef Alayev

#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
   Complex z1(1, 2);
   Complex z2(2, -3);

   cout << "z1=";
   z1.output();
   cout << "z2=";
   z2.output();

   
   Complex sum = z1.add(z2);
   
   cout << "sum=";
   sum.output();

   return 0;
}
