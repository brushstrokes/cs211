/* ClassCounter.h
 *
 * This class counts how many instances have been initialized, as well
 * as how many are currently initialized.
 *
 * Author: John D. Donath
 */

#ifndef CLASS_COUNTER_H
#define CLASS_COUNTER_H

class ClassCounter {
   public:

      /* ClassCounter()
       *
       * Constructor for class which adds one to number active and total
       * initialized in class
       *
       * Modifies: Static data in class to add this instance to count
       *           of initialized classes.
       */
      ClassCounter();

      /* ~ClassCounter()
       *
       * Destructor for the class which subtracts this class form count
       * of active classes
       *
       * Modifies:  Static data in class keeping track of how many classes
       *            have been initialized.
       */
      ~ClassCounter();

      /* howMany()
       *
       * Returns how many classes are currently active.
       *
       * Returns: Number of classes currently active.
       */
      static int howMany();

      /* total()
       *
       * Returns number of instances of the class that have been
       * initialized throughout lifetime of program.
       *
       * Returns: Number of classes that have been initialized by
       *          program.
       */
      static int total();

   private:
      static int numberActive;
      static int totalInitialized;
};

#endif
