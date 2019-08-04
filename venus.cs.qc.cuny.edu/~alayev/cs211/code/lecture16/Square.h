// Square.h

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"
#include "Rhombus.h"
#include <cmath>
#include <string>
using namespace std;

/** 
 * Contains a class Square.
 *
 * Author: John D. Donath
 */
class Square : public Rectangle, public Rhombus {
   public:
      // Default values are side1 = 1, side2 = 1
      Square() : Parallelogram(1, 1, 90) { }

      // Sets values in class to values in parameters
      Square(double s) : Parallelogram(s, s, 90) { }

      double getArea() const { 
         return side1 * side1;
      } 

      double getPerimeter() const { return 4 * side1; }

      string describe() const { return string("Square side 1 = ") 
         + toString(side1);}
};

#endif
