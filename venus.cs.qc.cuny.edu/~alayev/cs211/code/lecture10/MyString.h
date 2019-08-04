// MyString.h

#ifndef MY_STRING_H
#define MY_STRING_H

/* Demonstrates the way a simplified string class can be
 * implemented.  This is an example of putting dynamic allocation
 * into a class.
 *
 * @author: John D. Donath
 */

class MyString {
   public:
      // Default constructor creates an empty String
      MyString();

      // This constructor takes in a c-string and 
      // stores it in this class
      MyString(const char* cstr);

      // This constructor initializes a new string
      // with capacity guaranteed to be at least the parameter
      MyString(int);

      // Copy Constructor (1 of the big three)
      MyString(MyString&);

      // Destructor (2 of the big three)
      ~MyString();

      // Assignment overload (3 of big three)
      MyString& operator=(const MyString&);

      // Overload of [] so that contents of MyString can
      // be modified.
      char& operator[](int);

      // Returns the character stored at the given position
      char charAt(int) const;

      // Returns the length of the String
      int length() const {return size;}

      // Overload of + operator to concatenate two MyStrings
      const MyString operator+(const MyString&) const;

      // Inserts another string into this one at the position
      // specified by the first parameter
      void insert(int, const MyString&);

      // Returns this string as a c-string.  Note, this function
      // contains dynamic allocation.  (Note also that c_str in the
      // string class is not implemented this way).
      char* c_str() const;
      
   private:
      // Private function for memory management purposes
      void grow(int);

      char* str;
      int size;
      int capacity;
};

#endif
