/* DoubleList.h
 *
 * Contains a class that can hold a dynamic array of type double.  This
 * array can grow or shrink.
 *
 * Author: John D. Donath
 */

#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

class DoubleList {
   public:
      // Constructor for the class
      DoubleList();

      // Creates a list of doubles with capacity in parameters
      DoubleList(int capacity);

      // Stores the array in the parameter in the class
      DoubleList(double* array, int size);

      // Destructor for the class
      ~DoubleList();

      // Copy Constructor
      DoubleList(const DoubleList&);

      // Returns the element in the array at index
      double getElement(int index);

      // Removes the element indexed by index from the array
      double removeElement(int index);

      // Returns the size of the array
      int getSize();

      // Sets the element indexed by index to the value at double
      void insert(int index, double value);

      // Appends the element sent by the parameter to the array
      void append(double value);

      // Overload of = operator
      DoubleList& operator =(const DoubleList&);

   private:
      void grow();
      void shrink();
      double* array;
      int size;
      int capacity;
};

#endif
