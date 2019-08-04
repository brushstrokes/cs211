// main.cpp

/** 
 * Demonstrates a program that reads in information about 5 students, and
 * prints a summary of their grades.
 *
 * @author: John D. Donath
 */

// We use class Student, so we must include its .h file
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

// This function solicits the user to enter information for one student.
Student getInfo() {
   Student temp;
   string name;
   int mid, fin;
   cout << "Enter student's name:>";
   cin >> name;
   temp.setName(name);
   cout << "Enter midterm grade:>";
   cin >> mid;
   temp.setMidterm(mid);
   cout << "Enter final grade:>";
   cin >> fin;
   temp.setFinal(fin);
   return temp;
}

// This function prints information about a student given to it as a
// parameter
void printInfo(Student s) {
   cout << s.getName() << "'s final grade is "
        << s.getGrade() << endl;
}

// A main program that uses this class
int main() {
   Student students[5];
   for (int i = 0; i < 5; i++)
      students[i] = getInfo();

   cout << "Grades for the students are:" << endl;

   for (int j = 0; j < 5; j++)
      printInfo(students[j]);

   cout << "Thank you for using this program!" << endl;
   return 0;
}
