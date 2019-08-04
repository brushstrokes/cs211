// Number.h

// Demonstration of class Number, superclass example done in class

#ifndef NUMBER_H
#define NUMBER_H

namespace Donath {
   class Number
   {
      public:
         Number();
         Number(int);
         virtual double getNumber() const;

      protected:
         int n;
   };
}

#endif
