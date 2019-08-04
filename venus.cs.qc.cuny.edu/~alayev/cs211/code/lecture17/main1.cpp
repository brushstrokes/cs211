// main.cpp

// Demonstration program with numbers and fractions

#include "Number.h"
#include "Fraction.h"
#include <iostream>

using namespace Donath;

int main() {
   Fraction c(1, 0), d(1, 2);

   Number* n = new Fraction(2, 0);

   std::cout << c.getNumber() << " " << d.getNumber() << std::endl;
   std::cout << n->getNumber();

   delete n;

   return 0;
}
