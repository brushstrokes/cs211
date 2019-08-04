/* StaticDemo.cpp
 *
 * Demonstrates use of static variable to keep track of
 * how many instances of a class have been initialized.
 *
 * Author: John D. Donath
 */

#include <iostream>
#include "ClassCounter.h"
using namespace std;

/* initializeOne()
 *
 * Initializes one instance of the class ClassCounter and prints
 * number initialized.
 */
void initializeOne();

/* initializeTwo()
 *
 * Initializes two instances of the class ClassCounter and prints out
 * number initialized.
 */
void initializeTwo();

/* main()
 *
 * Main entry point to the program, which initializes instances of the class
 * and calls functions.  Number active and number that have been initialized
 * is displayed between function calls.
 */
int main() {
   ClassCounter cc;
   cout << "Total active: " << ClassCounter::howMany();
   cout << " or " << cc.howMany() << endl;
   cout << "Total initialized: " << ClassCounter::total();
   cout << " or " << cc.total() << endl;

   initializeOne();

   cout << "Total active: " << ClassCounter::howMany();
   cout << " or " << cc.howMany() << endl;
   cout << "Total initialized: " << ClassCounter::total();
   cout << " or " << cc.total() << endl;

   initializeTwo();

   cout << "Total active: " << ClassCounter::howMany();
   cout << " or " << cc.howMany() << endl;
   cout << "Total initialized: " << ClassCounter::total();
   cout << " or " << cc.total() << endl;

   return 0;
}

/* initializeOne()
 *
 * Initializes one instance of the class ClassCounter and prints
 * number initialized.
 */
void initializeOne() {
   ClassCounter aa;
   cout << "Total active: " << ClassCounter::howMany();
   cout << " or " << aa.howMany() << endl;
   cout << "Total initialized: " << ClassCounter::total();
   cout << " or " << aa.total() << endl;
}

/* initializeTwo()
 *
 * Initializes two instances of the class ClassCounter and prints out
 * number initialized.
 */
void initializeTwo() {
   ClassCounter aa, bb;
   cout << "Total active: " << ClassCounter::howMany();
   cout << " or " << aa.howMany() << " or " << bb.howMany() << endl;
   cout << "Total initialized: " << ClassCounter::total();
   cout << " or " << aa.total() << " or " << bb.total() << endl;
}
