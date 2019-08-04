// Sort.cpp

/* This program contains a bubble sort, and is a driver program to test the
 * comparable class along with several of its subclasses.
 *
 * Author: John D. Donath
 */

#include "Comparable.h"
#include "MyString.h"
#include <iostream>
using namespace std;

// Sorts an array that is a subclass of Comparable.
void bubbleSort(Comparable** array, int size);
void swap(Comparable** pos1, Comparable** pos2);

int main() {
   MyString** arrayOfMyString = new MyString*[5];
   cout << "Enter five Strings:>";
   for (int i = 0; i < 5; i++) {
      MyString j;
      cin >> j;
      arrayOfMyString[i] = new MyString(j);
   }
   bubbleSort((Comparable**) arrayOfMyString, 5);
   for (int i = 0; i < 5; i++)
      cout << *(arrayOfMyString[i]) << "\t";
   cout << endl;
   return 0;
}

void bubbleSort(Comparable** array, int size) {
   for (int i = 0; i < size; i++)
      for (int j = 0; j < size-1; j++)
         if (array[j]->compare(*(array[j+1])) > 0)
            swap(&(array[j]), &(array[j+1]));
}

void swap(Comparable** pos1, Comparable** pos2) {
   Comparable* temp = *pos1;
   *pos1 = *pos2;
   *pos2 = temp;
}
