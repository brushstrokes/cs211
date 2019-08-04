// Exception.cpp

#include <string>
#include "Exception.h"

using std::strcpy;
using std::strlen;

namespace Donath {

Exception::Exception() { 
   message = new char[1];
   *message = '\0';
}

Exception::Exception(const char* x) { 
   message = new char[strlen(x) + 1];
   strcpy(message, x); 
}

Exception::Exception(const Exception& other) { 
   message = new char[strlen(other.message) + 1];
   strcpy(message, other.message);
}

Exception& Exception::operator=(const Exception& other) {
   if (strlen(message) != strlen(other.message)) {
      delete [] message;
      message = new char[strlen(other.message) + 1];
   }
   strcpy(message, other.message);
   return *this;
}

const char* Exception::getMessage() const {
   return message;
}
            
}
