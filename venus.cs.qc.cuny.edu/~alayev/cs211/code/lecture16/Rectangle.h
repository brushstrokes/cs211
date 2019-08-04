// Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Rectangle.h"
#include <cmath>
#include <string>
using namespace std;

/** 
 * Contains a class Rectangle.
 *
 * Author: John D. Donath
 */
class Rectangle : public virtual Parallelogram {
   public:
      // Default values are side1 = 1, side2 = 1
      Rectangle() : Parallelogram(1, 1, 90) { }

      // Sets values in class to values in parameters
      Rectangle(double s1, double s2) : Parallelogram(s1, s2, 90) { }

      double getArea() const { 
         return side1 * side2;
      } 

      double getPerimeter() const { return 2*(side1 + side2); }

      string describe() const { return string("Rectangle side 1 = ")
         + toString(side1) + string("side 2 = ") + toString(side2);
      }
};

#endif
