// Shape.h

#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;

/**
 * An abstract superclass for all shapes.
 *
 * Author: John D. Donath
 */

class Shape {
   public:
      // Returns the area of the shape
      virtual double getArea() const = 0;

      // Returns a description of the shape
      virtual string describe() const = 0;

      // Returns the perimeter of the shape
      virtual double getPerimeter() const = 0;

      static string toString(double d) {
         string temp = "";
         int d1 = (int) d;
         while (d1 >= 1) {
            char digit = (d1 % 10) + '0';
            temp = digit + temp;
            d1 = d1 / 10;
         }
         temp = temp + '.';
         return temp;   
      }
};
#endif
