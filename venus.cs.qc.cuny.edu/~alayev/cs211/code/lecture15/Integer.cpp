// Integer.cpp

#include "Integer.h"

 /* This class implements an integer as a subclass of the class
  * Comparable.
  *
  * Author:  John D. Donath
 */

// Compares an instance of this class to another class just like it.
// Returns 0 if they are equal, a negative number if the other class
// is larger, and a positive number if this class is larger.
// Note the problem if an instance of other is passed in that is not
// actually an integer.
int Integer::compare(const Comparable& other) const {
   Integer* temp = (Integer*) &other;
   return i - temp->i;
}
