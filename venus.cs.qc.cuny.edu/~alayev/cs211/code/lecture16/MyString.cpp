// MyString.cpp

#include "MyString.h"
#include <cstring>
#include <cctype>
using namespace std;

/* Demonstrates the way a simplified string class can be
 * implemented.  This is an example of putting dynamic allocation
 * into a class.
 *
 * @author: John D. Donath
 */

// Default constructor creates an empty String
MyString::MyString() {
   capacity = 10;
   size = 0;
   str = new char[capacity];
}

// This constructor takes in a c-string and 
// stores it in this class
MyString::MyString(const char* cstr) {
   size = strlen(cstr);
   capacity = size+1;
   str = new char[capacity];
   strcpy(str, cstr);
}

// This constructor initializes a MyString so
// that it has a capacity of at least the parameter
MyString::MyString(int i) {
   size = 0;
   capacity = i;
   str = new char[capacity];
}

// Copy Constructor (1 of the big three)
MyString::MyString(MyString& ot) {
   size = ot.size;
   capacity = ot.capacity;
   str = new char[capacity];
   for (int i = 0; i < size; i++)
      str[i] = ot.str[i];
}

// Destructor (2 of the big three)
MyString::~MyString() {
   delete [] str;
}

// Assignment overload (3 of big three)
MyString& MyString::operator=(const MyString& lt) {
   // If the same instance appears on both sides of the = operator
   // Do nothing
   if (this == &lt)
      return *this;

   size = lt.size;
   capacity = lt.capacity;
   delete [] str;
   str = new char[capacity];
   for (int i = 0; i < size; i++)
      str[i] = lt.str[i];
   return *this;
}

// Overload of [] so that contents of MyString can
// be modified.
char& MyString::operator[](int i) throw (IOB) {
   if ((i >= size) || (i < 0))
      throw IOB();
   return str[i];
}

// Returns the character at the given position
char MyString::charAt(int i) const {
   if (i < size)
      return str[i];
   return '\0';
}

// Overload of + operator to concatenate two MyStrings
const MyString MyString::operator+(const MyString& ot) const {
   int newLength = size + ot.size;
   MyString temp(newLength);
   for (int i = 0; i < size; i++)
      temp[i] = str[i];
   for (int j = 0; j < ot.size; j++)
      temp[j+size] = ot.charAt(j);
   return temp;
}

// Inserts another string into this one at the position
// specified by the first parameter
void MyString::insert(int pos, const MyString& ot) throw (IOB) {
   // If user wants to insert to a position not in this
   // string, throw an exception
   if (pos > size || pos < 0)
      throw IOB();

   // Make sure that I have enough room
   if (capacity < size + ot.size)
      grow(size + ot.size);

   for (int i = size + ot.size; i > pos; i--)
      str[i] = str[i-1];

   for (int j = 0; j < ot.size; j++)
      str[pos+j] = ot.charAt(j);
}

// Returns this string as a c-string.  Note, this function
// contains dynamic allocation.  (Note also that c_str in the
// string class is not implemented this way).
char* MyString::c_str() const {
   char* temp = new char[size+1];
   for (int i = 0; i < size; i++)
      temp[i] = str[i];
   temp[size] = '\0';
   return temp;
}

// Private function for memory management
void MyString::grow(int newSize) {
   if (capacity < newSize) {
      capacity = newSize;
      char* temp = new char[capacity];
      for (int i = 0; i < size; i++)
         temp[i] = str[i];
      delete [] str;
      str = temp;
   }
}

int MyString::compare(const Comparable& other) const {
   MyString* ot = (MyString*) &other; 
   int length = size;
   if (ot->size < length)
      length = ot->size;
   for (int i = 0; i < length; i++)
      if (str[i] < ot->str[i])
         return -1;
      else if (str[i] > ot->str[i])
         return 1;
   if (size > ot->size)
      return 1;
   else if (size < ot->size)
      return -1;
   return 0;
}

ostream& operator<<(ostream& o, const MyString& s) {
   o << s.str;
   return o;
}

istream& operator>>(istream& i, MyString& s) {
   s.size = 0;
   char temp;
   i >> temp;
   while (!isspace(temp) && temp != '\n') {
      if (s.size >= s.capacity)
         s.grow(2 * s.size);
      s.str[s.size++] = temp;
      temp = i.get();
   }
      
   return i;
}
