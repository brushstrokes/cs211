// IllegalNumber.h

// Represents a class that gets thrown due to a mathematical anomaly

#ifndef ILLEGAL_NUMBER_H
#define ILLEGAL_NUMBER_H

#include <cmath>

using std::strcpy;

class IllegalNumber {
   public:
      IllegalNumber() { strcpy(message, "unknown");}
      IllegalNumber(int kind) {
         if (kind == 0)
            strcpy(message, "Division By Zero");
         else if (kind < 0)
            strcpy(message, "Negative Number");
         else
            strcpy(message, "unknown");
      }

      const char* getMessage() const { return message; }

   private:
      char message[20];
};

#endif
