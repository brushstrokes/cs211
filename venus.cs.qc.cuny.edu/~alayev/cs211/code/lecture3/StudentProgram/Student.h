// Student.h

#ifndef STUDENT_H
#define STUDENT_H

/** 
 * Demonstrates the .h file for a class that represents information about a
 * student.
 *
 * @author: John D. Donath
 */

#include <string>
using namespace std;

class Student {
   public:
      // Sets the name of the student
      void setName(string n);

      // Sets the midterm grade of the Student
      void setMidterm(int m);

      // Sets the final grade for the Student
      void setFinal(int f);

      // Returns the name of the student stored in the class
      string getName();

      // Returns the Letter Grade of the student
      char getGrade();

   private:
      // This function calculates and assigns the letter grade
      void calculateLetterGrade();

      string name;
      int midterm, final;
      char letterGrade;
};

#endif
