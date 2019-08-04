/* DoubleList.cpp
 *
 * Contains a class that can hold a dynamic array of type double.  This
 * array can grow or shrink.
 *
 * Author: John D. Donath
 */

#include "DoubleList.h"
#include <iostream>
using namespace std;


// Constructor for the class
DoubleList::DoubleList() {
   capacity = 8;
   size = 0;
   array = new double[capacity];
}

// Creates a list of doubles with capacity in parameters
DoubleList::DoubleList(int cap) {
   capacity = cap;
   size = 0;
   array = new double[capacity];
}

// Stores the array in the parameter in the class
DoubleList::DoubleList(double* a, int s) {
   size = s;
   capacity = size;
   array = new double[capacity];
   for (int i = 0; i < capacity; i++)
      array[i] = a[i];
}

// Copy Constructor for the class
DoubleList::DoubleList(const DoubleList& other) {
   size = other.size;
   capacity = other.capacity;
   array = new double[capacity];
   for (int i = 0; i < size; i++)
      array[i] = other.array[i];
}

// Destructor for the class
DoubleList::~DoubleList() {
   delete [] array;
}

// Returns the element in the array at index
double DoubleList::removeElement(int index) {
   if (index >= size) {
      cout << "Illegal memory range" << endl;
      return 0;
   }

   double temp = array[index];
   size--;
   for (int i = index; i < size; i++)
      array[i] = array[i+1];
   if (size < capacity / 2)
     shrink();
   return temp;
}

// Returns the size of the array
int DoubleList::getSize() {
   return size;
}

// Removes the element indexed by index from the array
double DoubleList::getElement(int index) {
   if (index >= size) {
      cout << "Illegal memory range" << endl;
      return 0;
   }
   return array[index];
}

// Sets the element indexed by index to the value at double
void DoubleList::insert(int index, double value) {
   if (index >= size) {
      cout << "Illegal memory range" << endl;
      return;
   }

   if (size >= capacity)
      grow();

   for (int i = size; i > index; i--)
      array[i] = array[i-1];

   array[index] = value;
   size++;
}

// Appends the element sent by the parameter to the array
void DoubleList::append(double value) {
   if (size >= capacity)
      grow();

   array[size++] = value;
}

// Doubles the size of the array stored in memory
void DoubleList::grow() {
   if (capacity <= 0)
      capacity = 1;
   else
      capacity *= 2;
   double* temp = new double[capacity];
   for (int i = 0; i < size; i++)
      temp[i] = array[i];

   delete [] array;
   array = temp;
}

// Shrinks the capacity of the array to its size
void DoubleList::shrink() {
   capacity = size;
   double* temp = new double[capacity];

   for (int i = 0; i < size; i++)
      temp[i] = array[i];

   delete [] array;
   array = temp;
}

// Overload of the = operator
DoubleList& DoubleList::operator =(const DoubleList& other) {
   if (this == &other)
      return *this;

   delete [] array;
   capacity = other.capacity;
   size = other.size;
   array = new double[capacity];
   for (int i = 0; i < size; i++)
      array[i] = other.array[i];

   return *this;
}
