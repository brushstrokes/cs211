/* Appear.cpp
 *
 * Demonstrates constructors and destructors in action.
 *
 * Author: John D. Donath
 */

#include "Appear.h"
#include <iostream>

using namespace std;

/* Appear()
 *
 * Default Constructor for class appear, prompts user for value.
 *
 * Requires: Nothing
 * Modifies: The value stored in the class.
 * Returns: A new instance of class Appear with the value set
 *          to whatever user input.
 */
Appear::Appear() {
   cout << "Enter an integer:>";
   cin >> value;
}

/* Appear(int)
 *
 * Constructor for class appear, sets value to what was passed in
 * parameter.
 *
 * Requires: An integer as a parameter.
 * Modifies: The value stored in the class.
 * Returns: A new instance of class Appear with the value set
 *          to whatever the parameter was.
 */
Appear::Appear(int p) {
   cout << "New instance of appear created, with value = " << p << endl;
   value = p;
}

/* ~Appear()
 *
 * Destructor for class appear.  Prints value stored in class.
 *
 * Requires: Nothing.
 * Modifies: Prints value stored in class.
 * Returns: Nothing.
 */
Appear::~Appear() {
   cout << "Class with value = " << value << " destroyed." << endl;
}

