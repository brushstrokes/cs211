// ConstDemo.cpp

// Program to demonstrate use of const variables

#include "Student.h"
#include <string>
#include <iostream>

using std::string;
using Donath::Student;
using std::cout;
using std::endl;

int main() {
   Student s("First");

   // A non-const function can change the values stored in the class
   s.setTest(100, 0);
   s.setTest(90, 1);
   s.setTest(95, 2);

   // A const function has no affect on the class
   cout << s.getTest(0) << endl;

   // Declare another instance of student, which is a copy of the first
   // student, it is a const.
   const Student s2 = s;

   // Illegal, since s2 is a const class
//   s2.setTest(99, 1);

   // Legal, since getTest is a const function
   cout << s2.getTest(1) << endl;

   // The following is illegal, since string is constant
//   s.getName().insert(0, "A");

   // The following, however is legal, since cout takes in a constant
   // string as its parameter
   cout << s.getName() << endl;

   // The following is legal, since constant variable is copied to
   // another (non constant) variable
   string str = s.getName();
   str.insert(1, "A");
   cout << str << endl;

   return 0;
}
