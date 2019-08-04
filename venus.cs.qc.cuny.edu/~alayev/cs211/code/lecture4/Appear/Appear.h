/* Appear.h
 *
 * Demonstrates constructors and destructors in action.
 *
 * Author: John D. Donath
 */

#ifndef APPEAR_H
#define APPEAR_H

class Appear {
   public:

      /* Appear()
       *
       * Default Constructor for class appear, prompts user for value.
       *
       * Requires: Nothing
       * Modifies: The value stored in the class.
       * Returns: A new instance of class Appear with the value set
       *          to whatever user input.
       */
      Appear();

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
      Appear(int);

      /* ~Appear()
       *
       * Destructor for class appear.  Prints value stored in class.
       *
       * Requires: Nothing.
       * Modifies: Prints value stored in class.
       * Returns: Nothing.
       */
      ~Appear();

   private:
      int value;
};

#endif
