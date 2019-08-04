// Integer.h

#ifndef INTEGER_H
#define INTEGER_H

#include "Comparable.h"

 /* This class implements an integer as a subclass of the class
  * Comparable.
  *
  * Author:  John D. Donath
 */
class Integer : public Comparable {
   public:
      // Creates a new Integer class with a default value of 0.
      Integer() : Comparable() { i = 0; }

      // Creates a new Integer class with the value passed by the 
      // parameter
      Integer(int v) : Comparable() {i = v;}

      // Compares an instance of this class to another class just like it.
      // Returns 0 if they are equal, a negative number if the other class
      // is larger, and a positive number if this class is larger.
      int compare(const Comparable& other) const; 

      // Returns the integer stored in the class
      int getInt() const {return i;}

      // Sets the integer stored in the class
      void setInt(int v) {i = v;}
   private:
      int i;
};

#endif
