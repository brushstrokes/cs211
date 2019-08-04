// Student.cpp

/** 
 * Demonstrates a .cpp for the class Student
 *
 * @author: John D. Donath
 */

#include "Student.h"
#include <string>
using namespace std;

// Sets the name of the student
void Student::setName(string n) {
   name = n;
}

// Sets the midterm grade of the Student
void Student::setMidterm(int m) {
   midterm = m;
}

// Sets the final grade for the Student
void Student::setFinal(int f) {
   final = f;
}

// Returns the name of the student stored in the class
string Student::getName() {
   return name;
}

// Calculates and returns the student's grade
char Student::getGrade() {
   calculateLetterGrade();
   return letterGrade;
}

// This function calculates and assigns the letter grade
void Student::calculateLetterGrade() {
   float average = (float) (midterm + final) / 2;
   if (average >= 90)
      letterGrade = 'A';
   else if (average >= 80)
      letterGrade = 'B';
   else if (average >= 70)
      letterGrade = 'C';
   else if (average >= 60)
      letterGrade = 'D';
   else
      letterGrade = 'F';
}
