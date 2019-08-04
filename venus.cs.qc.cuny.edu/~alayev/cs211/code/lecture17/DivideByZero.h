// DivideByZero.h
// Please note:  All function definitions are inline.

#ifndef DIVIDE_BY_ZERO_H
#define DIVIDE_BY_ZERO_H
#include "Exception.h"

namespace Donath {
class DivideByZero : public Exception {
   public:
      DivideByZero() : Exception() { }

      DivideByZero(const char* x) : Exception(x) { }

      DivideByZero(const DivideByZero& other) : Exception(other) { }

      DivideByZero& operator=(const DivideByZero& other) { 
         Exception::operator=(other);
         return *this;
      }
};

}
#endif
