// main.cpp

// Demonstration program with numbers and fractions

#include "Number.h"
#include "Fraction.h"
#include "SquareRoot.h"
#include "IllegalNumber.h"
#include <iostream>

using namespace Donath;

int main() {
   try {
      Number a, b(3);
      Fraction c, d(1, 2);
      SquareRoot e, sr(3, 5);

      Number* n;
      Fraction* f;

      std::cout << a.getNumber() << " " << b.getNumber() << std::endl;
      std::cout << c.getNumber() << " " << d.getNumber() << std::endl;

      a = d;

      std::cout << a.getNumber() << " " << d.getNumber() << std::endl;

      n = &d;
      f = &d;

      std::cout << n->getNumber() << " " << f->getNumber() << std::endl;
      std::cout << f->getNumber() << std::endl;

      std::cout << e.getNumber() << std::endl;
      std::cout << sr.getNumber() << std::endl;
   }
   catch (IllegalNumber in) {
      std::cout << in.getMessage() << std::endl;
   }
   return 0;
}
