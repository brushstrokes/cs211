// Fraction.cpp

// Demonstration of class Fraction, subclass example done in class

#include "Fraction.h"
#include "IllegalNumber.h"

namespace Donath {
   Fraction::Fraction() : Number(0), d(1) { } 

   Fraction::Fraction(int nu, int de) throw (IllegalNumber) : Number(nu) {
      if (de != 0)
         d = de;
      else
         throw IllegalNumber(de);
   }

   double Fraction::getNumber() const {
      return (((double) n) / d);
   }
}

