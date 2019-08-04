// shapeTest.cpp

/**
 * Tests the shape inheritance hierarchy.
 *
 * Author: John D. Donath
 */
 
#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
   Shape* aShape;
   cout << "Choose a shape: " << endl
        << "1. Circle" << endl
        << "2. Parallelogram" << endl
        << "3. Rhombus" << endl
        << "4. Rectangle" << endl
        << "5. Square" << endl;
   int choice;
   cin >> choice;

   switch (choice) {
      case 1:
         aShape = new Circle(3);
         break;
      case 2: aShape = new Parallelogram(4, 5, 30);
         break;
      case 3: aShape = new Rhombus(6, 30);
         break;
      case 4: aShape = new Rectangle(7, 8);
         break;
      case 5: aShape = new Square(9);
         break;
      default:
         aShape = NULL;
   }
   if (aShape) {
      cout << aShape->describe() << endl
           << "Area = " << aShape->getArea() << endl
           << "Perimeter = " << aShape->getPerimeter() << endl;
   }
   return 0;
}
