// Student.cpp

// This class demonstrates inline function definitions and const declarations.

#include "Student.h"

namespace Donath {

    // Initializes name to empty string (default value) and test
    // Grades to zero
    Student::Student() {
       name = "";
       for (int i = 0; i < NUM_TESTS; i++) {
          tests[i] = 0;
       }
    }

    // Sets name to value passed by parameter, test grades are set
    // to zero
    Student::Student(string n) {
       name = n;
       for (int i = 0; i < NUM_TESTS; i++) {
          tests[i] = 0;
       }
    }

    // Inline Function Definitions missing from .cpp file

    // Returns test stored at location specified by parameter
    int Student::getTest(int t) const {
       return tests[t];
    }

    // Sets test to grade specified by first parameter at 
    // location specified by second parameter
    void Student::setTest(int gr, int pos) {
       tests[pos] = gr;
    }
}

