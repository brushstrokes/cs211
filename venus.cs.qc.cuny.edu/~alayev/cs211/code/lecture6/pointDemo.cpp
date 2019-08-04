// PointDemo.cpp

/* This program demonstrates some basic properties of pointers.
 *
 * @author: John D. Donath
 */

#include <iostream>

using namespace std;

int main() {
   // P is a pointer
   int *p;

   // v is a variable
   int v;

   // v gets the value 5
   v = 5;

   // p gets the address of v
   p = &v;

   // This prints a hexadecimal address
   cout << p << endl;
   cout << &v << endl;

   // This prints a value stored at the location to which
   // the pointer is pointing
   cout << *p << endl;
   
   return 0;
}
