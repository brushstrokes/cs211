// Rhombus.h

#ifndef RHOMBUS_H
#define RHOMBUS_H 

#include "Parallelogram.h"
#include <cmath>
#include <string>
using namespace std;

/** 
 * Contains a class Rhombus.
 *
 * Author: John D. Donath
 */
class Rhombus : public virtual Parallelogram {
   public:
      // Default values are side = 1, angle = 90
      Rhombus() : Parallelogram(1, 1, 90) { }

      // Sets values in class to values in parameters
      Rhombus(double s, double ang) : Parallelogram(s, s, ang) { }

      double getArea() const { 
         return side1 * sin(angle * (3.14159 / 180)) * side1;
      } 

      double getPerimeter() const { return 4 * side1; }

      string describe() const { return string("Rhombus side = ")
         + toString(side1) + string("angle between them = ") 
         + toString(angle);
      }
};

#endif
