// Student.h

// This class demonstrates inline function definitions and const declarations.

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#define NUM_TESTS 3
using std::string;

namespace Donath {
   class Student {
      public:
         // Initializes name to empty string (default value) and test
         // Grades to zero
         Student();

         // Sets name to value passed by parameter, test grades are set
         // to zero
         Student(string);

         // Inline Function Definition
         const string getName() const { return name; }

         // Returns test stored at location specified by parameter
         int getTest(int) const;

         // Sets test to grade specified by first parameter at 
         // location specified by second parameter
         void setTest(int, int);
         
      private:
         string name;
         int tests[NUM_TESTS];
   };
}
#endif

