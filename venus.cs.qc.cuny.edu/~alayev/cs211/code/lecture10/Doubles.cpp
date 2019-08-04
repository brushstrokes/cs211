/* Doubles.cpp
 *
 * Contains a test program of the dynamic array.
 *
 * Author: John D. Donath
 */

#include <iostream>
using namespace std;

#include "DoubleList.h"

int main() {
   int size;
   cout << "Enter size of array>";
   cin >> size;

   DoubleList dl(size);

   cout << "Enter members of array>";
   for (int i = 0; i < size; i++) {
      double temp;
      cin >> temp;
      dl.append(temp);
   }

   cout << "Elements of array:" << endl;
   for (int j = 0; j < dl.getSize(); j++)
      cout << dl.getElement(j) << " ";

   cout << endl << "Enter an element to add to the array>";
   double temp;
   cin >> temp;
   cout << "Enter position>";
   int pos;
   cin >> pos;
   dl.insert(pos, temp);

   cout << "Elements of array:" << endl;
   for (int j = 0; j < dl.getSize(); j++)
      cout << dl.getElement(j) << " ";

   cout << endl << "Enter position to remove an element>";
   cin >> pos;
   double r = dl.removeElement(pos);
   cout << "Element removed " << r << endl;

   cout << "Elements of array:" << endl;
   for (int j = 0; j < dl.getSize(); j++)
      cout << dl.getElement(j) << " ";
   cout << endl;

   DoubleList* d2 = new DoubleList[2];
   d2[0] = d2[1] = dl;
   d2[0].insert(0, 20);
   
   cout << "Elements of the array d2[0]:" << endl;
   for (int j = 0; j < d2[0].getSize(); j++)
      cout << d2[0].getElement(j) << " ";
   cout << endl;

   cout << "Elements of the array d2[1]:" << endl;
   for (int j = 0; j < d2[1].getSize(); j++)
      cout << d2[1].getElement(j) << " ";
   cout << endl;

   delete [] d2;

   return 0;
}
