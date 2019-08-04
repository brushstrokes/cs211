// Fraction.cpp

// Demonstration of class Fraction, subclass example done in class

#include "Fraction.h"
#include <cctype>
#include <iostream>
#include <fstream>
#include "NumberFormatException.h"
#include "DivideByZero.h"

using std::istream;
using std::ifstream;
using std::ostream;
using std::isspace;

namespace Donath {
   Fraction::Fraction() : Number(0), d(1) { } 

   Fraction::Fraction(int nu, int de) throw (DivideByZero) : Number(nu) {
      if (de != 0)
         d = de;
      else
         throw DivideByZero("Zero in denominator not allowed");
   }

   double Fraction::getNumber() const {
      return (((double) n) / d);
   }

   ostream& operator << (ostream& out, const Fraction& f) {
      out << f.n << "/" << f.d;
      return out;
   }

   ifstream& operator >> (ifstream& in, Fraction& f)
                throw (DivideByZero, NumberFormatException) 
   {
      in >> f.n;
      char slash;
      in >> slash;
      in >> f.d;

      if ((!in) || (slash != '/'))
         throw NumberFormatException("File does not contain fractions in their proper format.");
      if (0 == f.d)
         throw DivideByZero("Zero not allowed in denominator.");

      // To remove whitespace characters from the stream
      char whtspace;
      while ((!in.eof()) && isspace(in.peek()))
         in.get(whtspace);
      return in;
   }

   istream& operator >> (istream& in, Fraction& f)
                throw (DivideByZero, NumberFormatException) 
   {
      in >> f.n;
      char slash;
      in >> slash;
      in >> f.d;

      if ((!in) || (slash != '/'))
         throw NumberFormatException("Incorrect fraction format.");
      if (0 == f.d)
         throw DivideByZero("Zero not allowed in denominator.");

      return in;
   }
}
