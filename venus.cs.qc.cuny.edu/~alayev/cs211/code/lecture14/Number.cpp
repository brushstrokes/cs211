// Number.cpp

// Demonstration of class Number, superclass example done in class

#include "Number.h"

namespace Donath {
   Number::Number()
   { n = 0; }

   Number::Number(int n)
   { this->n = n; }

   double Number::getNumber() const {
      return n;
   }
}

