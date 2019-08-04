/* main.cpp
 *
 * Main program that inputs two fractions, and tests the various
 * operator overloads on them.
 * 
 * Author: John D. Donath
 */

#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
   Fraction f1, f2;
   cout << "Enter first fraction>";
   cin >> f1;
   cout << "Enter second fraction>";
   cin >> f2;

   cout << "The value of f1 in decimal is: " << f1.getFraction() << endl;
   cout << "The value of f2 in decimal is: " << f2.getFraction() << endl;
   if (f1 == f2)
      cout << "f1 and f2 are equal." << endl;
   else
      cout << "f1 and f2 are not equal." << endl;

   Fraction f3 = f1 + f2;
   cout << "Their sum is: " << f3 << endl;

   f3 = f1 - f2;
   cout << "The difference between them is: " << f3 << endl;

   f3 = f1 * f2;
   cout << "Their product is: " << f3 << endl;

   f3 = f1 / f2;
   cout << "Their quotient is: " << f3 << endl;

   cout << "The negation of f1 is: " << -f1 << endl;

   return 0;
}

