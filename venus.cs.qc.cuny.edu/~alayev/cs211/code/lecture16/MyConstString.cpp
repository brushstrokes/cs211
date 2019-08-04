// MyConstString.cpp

/**
 * This is a subclass of MyString.  It allows you to recover the String the
 * way it was when the class was created.
 *
 * Author: John D. Donath
 */

#include "MyConstString.h"

// Default Constructor to create an empty MyString
MyConstString::MyConstString() : MyString() {
   origSize = 0;
   origString = new char[1];
}

// This constructor takes in a c-string and 
// stores it in this class
MyConstString::MyConstString(const char* cstr) : MyString(cstr) {
   origSize = size;
   origString = new char[size];
   for (int i = 0; i < size; i++)
      origString[i] = str[i];
}

// This constructor initializes a new string
// with capacity guaranteed to be at least the parameter
MyConstString::MyConstString(int i) : MyString(i) {
   origSize = 0;
   origString = new char[1];
}

// Copy Constructor (1 of the big three)
MyConstString::MyConstString(MyConstString& ot) : MyString(ot) {
   origSize = ot.origSize;
   origString = new char[origSize];
   for (int i = 0; i < origSize; i++)
      origString[i] = ot.origString[i];
}

// Destructor (2 of the big three)
MyConstString::~MyConstString() {
   delete [] origString;
}

// Assignment overload (3 of big three)
MyConstString& MyConstString::operator=(const MyConstString& ot) {
   if (this == &ot)
      return *this;

   MyString::operator=(ot);

   delete [] origString;
   origSize = ot.origSize;
   origString = new char[ot.origSize];
   for (int i = 0; i < origSize; i++)
      origString[i] = ot.origString[i];
   return *this;
}

void MyConstString::restore() {
   if (origSize > capacity)
      grow(origSize);
   for (int i = 0; i < origSize; i++)
      str[i] = origString[i];
   size = origSize;
}
