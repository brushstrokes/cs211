// SquareRoot.h

// Demonstration of class SquareRoot, subclass example done in class

#ifndef SQUAREROOT_H
#define SQUAREROOT_H

#include "Number.h"
#include "IllegalNumber.h"

namespace Donath {
   class SquareRoot : public Number
   {
      public:
         SquareRoot();
         SquareRoot(int, int) throw (IllegalNumber);
         virtual double getNumber() const;

      private:
         int d;
   };
}
#endif
