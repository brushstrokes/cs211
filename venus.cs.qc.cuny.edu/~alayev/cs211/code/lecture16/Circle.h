// Circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

/**
 * Implements the shape circle, a subclass of Shape
 *
 * Author: John D. Donath
 */

#include "Shape.h"
#include <string>
using namespace std;

class Circle : public Shape {
   public:
      // Creates a circle, default radius = 1
      Circle() {radius = 1;}

      // Creates a circle with radius as passed by the parameter
      Circle(double r) {radius = r;}

      // Returns the area of the circle
      virtual double getArea() const { return 3.14*radius*radius; }
      
      // Returns the perimeter of the circle
      virtual double getPerimeter() const { return 3.14*2*radius;}

      // Describes the circle
      virtual string describe() const {return string("A circle with radius = ")
            + toString(radius); 
      }

   private:
      double radius;
};
#endif
