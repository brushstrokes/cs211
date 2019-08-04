// IndexOutOfBounds.h
// Please note:  All function definitions are inline.

#ifndef INDEX_OUT_OF_BOUNDS_H 
#define INDEX_OUT_OF_BOUNDS_H

#include "Exception.h"

namespace Donath {
class IndexOutOfBounds : public Exception {
   public:
      IndexOutOfBounds() : Exception() { }

      IndexOutOfBounds(const char* x) : Exception(x) { }

      IndexOutOfBounds(const IndexOutOfBounds& other) : Exception(other) { }

      IndexOutOfBounds& operator=(const IndexOutOfBounds& other) { 
         Exception::operator=(other);
         return *this;
      }
};

}
#endif
