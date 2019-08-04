// bubbleSortIterative.cpp

/* Contains code for iterative version of bubble sort for search and
 * sort program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"


/* sort()
 *
 * Sorts the list of names using the iterative version of
 * the bubble sort algorithm.
 *
 * Parameters:
 *    NameArray Array of names to be sorted.
 *    int begin Beginning of portion of array to be sorted.
 *    int end End of portion of array to be sorted.
 *    
 */
void sort(NameArray& array, int beginIndex, int endIndex) {
   for (int i = beginIndex; i < endIndex; i++)
      for (int j = beginIndex; j < endIndex - 1; j++)
         if (strcmp(array.names[j], array.names[j+1]) > 0)
            swap(array.names[j], array.names[j+1]);
}
