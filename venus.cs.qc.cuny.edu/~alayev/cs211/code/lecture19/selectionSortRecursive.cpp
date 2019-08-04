// selectionSortRecursive.cpp

/* Contains code for recursive version of selection sort for search and
 * sort program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"
int findLowest(const NameArray& array, int beginIndex, int endIndex);

/* sort()
 *
 * Sorts the list of names using the selection sort algorithm.
 *
 * Parameters:
 *    NameArray Array of names to be sorted.
 *    int begin Beginning of portion of array to be sorted.
 *    int end End of portion of array to be sorted.
 *    
 */
void sort(NameArray& array, int beginIndex, int endIndex) {
   if (beginIndex + 1 >= endIndex)
      return;
   int lowest = findLowest(array, beginIndex, endIndex);
   swap(array.names[beginIndex], array.names[lowest]);
   sort(array, beginIndex + 1, endIndex);
}

/* findLowest()
 *
 * Finds the lowest element in an array.
 *
 * Parameters:
 * NameArray An array of names
 * int The beginning of where to look for the lowest element
 * int The end of where to look for the lowest element
 *
 * Return value:
 * int The index of the lowest element in this subarray.
 */
int findLowest(const NameArray& array, int beginIndex, int endIndex) {
   if (beginIndex + 1 >= endIndex) {
      return beginIndex;
   }
   int restLowest = findLowest(array, beginIndex + 1, endIndex);
   if (strcmp(array.names[beginIndex], array.names[restLowest]) < 0)
      return beginIndex;
   return restLowest;
}
