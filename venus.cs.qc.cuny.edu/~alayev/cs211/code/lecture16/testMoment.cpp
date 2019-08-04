// testMoment.cpp

/**
 * Test program for the moment inheritance hierarchy.
 *
 * Author: John D. Donath
 */

#include "Moment.h"
#include <iostream>

using namespace std;

int main() {
   Moment moment1, moment2(3, 30, 2004, 9, 1, 3);
   cout << moment1.getM() << endl;
   cout << moment2.getM() << endl;
   Time* t = &moment2;
   Date* d = &moment2;
   cout << t->getM() << endl;
   cout << d->getM() << endl;
   
   return 0;
}
