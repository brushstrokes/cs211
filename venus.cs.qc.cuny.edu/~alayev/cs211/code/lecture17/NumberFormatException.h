// NumberFormatException.h
// Note:  All function definitions are inline

#ifndef NUMBER_FORMAT_EXCEPTION_H
#define NUMBER_FORMAT_EXCEPTION_H 

#include "Exception.h"

namespace Donath {
class NumberFormatException : public Exception {
   public:
      NumberFormatException() : Exception () { }

      NumberFormatException(const char* x) : Exception (x) { }

      NumberFormatException(const NumberFormatException& other)
         : Exception(other) { }

      NumberFormatException& operator=(const NumberFormatException& other) {
         Exception::operator=(other);
         return *this;
      }
      
};
}

#endif
