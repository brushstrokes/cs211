/* main.cpp
 *
 * Test program for appear class.
 * 
 * Author: John D. Donath
 */

#include <iostream>
#include "Appear.h"

using namespace std;

void funct() {
   Appear a;
   cout << "Inside body of funct" << endl;
}

/* main()
 *
 * Main program that initializes several instances of appear, and calls
 * appropriate constructors.  The purpose is to test the appear class.
 *
 * Requires: Nothing
 * Modifies: The classes of appear that get initialized.
 * Returns: 0 for successful execution of program.
 */
int main() {
   Appear a, b(3);
   a = Appear(5);
   Appear c = Appear(6);
   cout << "Before we call funct" << endl;
   funct();
   cout << "Funct is finished" << endl;
   return 0;
}

