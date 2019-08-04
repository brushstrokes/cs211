// Fraction.h

// Demonstration of class Fraction, subclass example done in class

#ifndef FRACTION_H
#define FRACTION_H 

#include "Number.h"
#include "DivideByZero.h"
#include "NumberFormatException.h"
#include <iostream>
#include <fstream>

using std::ifstream;
using std::istream;
using std::ostream;

namespace Donath {
   class Fraction : public Number
   {
      public:
         Fraction();
         Fraction(int, int) throw (DivideByZero);
         virtual double getNumber() const;
         friend ostream& operator << (ostream& out, const Fraction&);
         friend ifstream& operator >> (ifstream& in, Fraction&) throw (DivideByZero, NumberFormatException);
         friend istream& operator >> (istream& in, Fraction&) throw (DivideByZero, NumberFormatException);

      private:
         int d;
   };
}
#endif
