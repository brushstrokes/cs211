// main.cpp

// Demonstration program with numbers and fractions

#include "Number.h"
#include "Fraction.h"
#include <iostream>

using namespace Donath;

int main() {
   Number a, b(3);
   Fraction c, d(1, 2);

   Number* n;
   Fraction* f;

   std::cout << a.getNumber() << " " << b.getNumber() << std::endl;
   std::cout << c.getNumber() << " " << d.getNumber() << std::endl;

   a = d;

   std::cout << a.getNumber() << " " << d.getNumber() << std::endl;

   n = &d;
   f = &d;

   std::cout << n->getNumber() << " " << f->getNumber() << std::endl;

   return 0;
}
