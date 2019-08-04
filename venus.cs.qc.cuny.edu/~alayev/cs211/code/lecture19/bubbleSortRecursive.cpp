// bubbleSortRecursive.cpp

/* Contains code for iterative version of bubble sort for search and
 * sort program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"

void pass(NameArray& array, int beginIndex, int endIndex); 

/* sort()
 *
 * Sorts the list of names using the recursive version of
 * the bubble sort algorithm.
 *
 * Parameters:
 *    NameArray Array of names to be sorted.
 *    int begin Beginning of portion of array to be sorted.
 *    int end End of portion of array to be sorted.
 *    
 */
void sort(NameArray& array, int beginIndex, int endIndex) {
   if (beginIndex >= endIndex - 1)
      return;
   pass(array, beginIndex, endIndex);
   sort(array, beginIndex, endIndex - 1);
}

/* void pass()
 *
 * Passes through the array once, swapping elements where the
 * neighbor is smaller than the previous one.
 *
 * Parameters:
 * NameArray& The array to be passed through
 * int The beginning point in the array
 * int The ending point in the arrray
 */
void pass(NameArray& array, int beginIndex, int endIndex) {
   if (beginIndex >= endIndex - 1)
      return;

   if (strcmp(array.names[beginIndex], array.names[beginIndex+1]) > 0)
      swap(array.names[beginIndex], array.names[beginIndex+1]);

   pass(array, beginIndex + 1, endIndex);
}
