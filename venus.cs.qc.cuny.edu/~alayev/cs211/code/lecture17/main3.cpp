// main3.cpp

// Demonstration program with numbers and fractions

#include "Number.h"
#include "Fraction.h"
#include "DivideByZero.h"
#include "NumberFormatException.h"
#include <iostream>

using namespace Donath;

int main() {
   try {
      Fraction c(1, 4), d(1, 2), e;
      std::cout << c.getNumber() << " " << d.getNumber() << std::endl;

      Number* n = new Fraction(2, 3);

      std::cout << n->getNumber() << endl;

      delete n;

      std::cout << "Enter a fraction:>";
      std::cin >> e;
      std::cout << e << endl;
   }
   catch (DivideByZero dby) {
      cout << dby.getMessage() << endl;
   }
   catch (NumberFormatException nfe) {
      cout << nfe.getMessage() << endl;
   }
   
   return 0;
}
