// Fraction.h

// Demonstration of class Fraction, subclass example done in class

#ifndef FRACTION_H
#define FRACTION_H 

#include "Number.h"
#include "IllegalNumber.h"

namespace Donath {
   class Fraction : public Number
   {
      public:
         Fraction();
         Fraction(int, int) throw (IllegalNumber);
         virtual double getNumber() const;

      private:
         int d;
   };
}
#endif
