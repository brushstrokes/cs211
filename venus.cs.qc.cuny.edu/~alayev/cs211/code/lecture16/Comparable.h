// Comparable.h

#ifndef COMPARABLE_H
#define COMPARABLE_H

/* This class is a superclass for all classes that are comparable for each
 * other.  It is an example of polymorphism, in that a generic sorting
 * algorithm can use instances of this superclass, rather than
 * its subclasses.
 *
 * Author:  John D. Donath
 */
class Comparable {
   public:
      // Compares an instance of this class to another class just like it.
      // Returns 0 if they are equal, a negative number if the other class
      // is larger, and a positive number if this class is larger.
      virtual int compare(const Comparable& other) const = 0;
};

#endif
