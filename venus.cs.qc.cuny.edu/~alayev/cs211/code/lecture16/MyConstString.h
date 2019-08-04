// MyConstString.h

#ifndef MY_CONST_STRING_H
#define MY_CONST_STRING_H

/**
 * This is a subclass of MyString.  It allows you to recover the String the
 * way it was when the class was created.
 *
 * Author: John D. Donath
 */

#include "MyString.h"

class MyConstString : public MyString {
   public:
      // Default Constructor to create an empty MyString
      MyConstString();

      // This constructor takes in a c-string and 
      // stores it in this class
      MyConstString(const char* cstr);

      // This constructor initializes a new string
      // with capacity guaranteed to be at least the parameter
      MyConstString(int);

      // Copy Constructor (1 of the big three)
      MyConstString(MyConstString&);

      // Destructor (2 of the big three)
      ~MyConstString();

      // Assignment overload (3 of big three)
      MyConstString& operator=(const MyConstString&);

      // Restores the original string
      void restore();

   private:
      char* origString;
      int origSize;
};

#endif
