// Parallelogram.h

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H 

#include "Shape.h"
#include <cmath>
#include <string>
using namespace std;

/** 
 * Contains a class Parallelogram.
 *
 * Author: John D. Donath
 */
class Parallelogram : public Shape {
   public:
      // Default values are both sides = 1, angle = 90
      Parallelogram() {side1 = side2 = 1; angle = 90; }

      // Sets values in class to values in parameters
      Parallelogram(double s1, double s2, double ang) {
         side1 = s1;     side2 = s2;     angle = ang;
      }

      double getArea() const { 
         return side1 * sin(angle * (3.14159 / 180)) * side2;
      } 

      double getPerimeter() const { return 2 * (side1 + side2); }

      string describe() const { return string("Parallelogram side 1 = ")
         + toString(side1) + string("side 2 = ") + toString(side2) 
         + string("angle between them = ") + toString(angle);
      }

   protected:
      double side1, side2, angle;
};

#endif
