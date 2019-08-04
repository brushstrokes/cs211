/* ClassCounter.cpp
 *
 * This class counts how many instances have been initialized, as well
 * as how many are currently initialized.
 *
 * Author: John D. Donath
 */

#include "ClassCounter.h"

int ClassCounter::totalInitialized = 0;
int ClassCounter::numberActive = 0;

/* ClassCounter()
 *
 * Constructor for class which adds one to number active and total
 * initialized in class
 *
 * Modifies: Static data in class to add this instance to count
 *           of initialized classes.
 */
ClassCounter::ClassCounter() {
   totalInitialized++;
   numberActive++;
}

/* ~ClassCounter()
 *
 * Destructor for the class which subtracts this class form count
 * of active classes
 *
 * Modifies:  Static data in class keeping track of how many classes
 *            have been initialized.
 */
ClassCounter::~ClassCounter() {
   numberActive--;
}

/* howMany()
 *
 * Returns how many classes are currently active.
 *
 * Returns: Number of classes currently active.
 */
int ClassCounter::howMany() {
   return numberActive;
}

/* total()
 *
 * Returns number of instances of the class that have been
 * initialized throughout lifetime of program.
 *
 * Returns: Number of classes that have been initialized by
 *          program.
 */
int ClassCounter::total() {
   return totalInitialized;
}
