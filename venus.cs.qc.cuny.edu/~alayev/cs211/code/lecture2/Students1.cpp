// Students1.cpp

/** 
 * Demonstrates how to write a program using a class.  This program
 * keeps track of the records of 5 students.
 *
 * @author: John D. Donath
 */

#include <string>
#include <iostream>
using namespace std;

// Declaration of the Class Student
class Student {

   // Notice that most (but not all) functions are public
   public:
      // The first three functions are mutator functions

      // Sets the name of the student
      void setName(string n);

      // Sets the midterm grade of the Student
      void setMidterm(int m);

      // Sets the final grade for the Student
      void setFinal(int f);

      // The next two functions are accessor functions

      // Returns the name of the student stored in the class
      string getName();

      // Returns the Letter Grade of the student
      char getGrade();

   // Notice that all variables are private, and some functions are private
   private:
      // This function calculates and assigns the letter grade
      void calculateLetterGrade();

      string name;
      int midterm, final;
      char letterGrade;
};

// Below are the definitions of the functions in this class
// Sets the name of the student
void Student::setName(string n) {
   name = n;
}

// Sets the midterm grade of the Student
void Student::setMidterm(int m) {
   if ( (m >= 0) && (m <= 100))
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
   Student students[3];
   for (int i = 0; i < 3; i++)
      students[i] = getInfo();

   cout << "Grades for the students are:" << endl;

   for (int j = 0; j < 3; j++)
      printInfo(students[j]);

   cout << "Thank you for using this program!" << endl;
   return 0;
}
