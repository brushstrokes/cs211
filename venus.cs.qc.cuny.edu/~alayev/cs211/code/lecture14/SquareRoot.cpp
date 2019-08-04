// SquareRoot.cpp

// Demonstration of class SquareRoot, subclass example done in class

#include "SquareRoot.h"
#include <cmath>

using std::sqrt;

namespace Donath {

SquareRoot::SquareRoot() : Number() { d = 0; }

SquareRoot::SquareRoot(int reg, int rad) throw (IllegalNumber)
     	: Number(reg) 
{ 
   if (rad < 0)
      throw IllegalNumber(rad);
   d = rad;; 
}

double SquareRoot::getNumber() const {
   return n * sqrt(d);
}
}
