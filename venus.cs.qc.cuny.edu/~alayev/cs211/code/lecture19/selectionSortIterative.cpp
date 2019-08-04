// selectionSortIterative.cpp

/* Contains code for iterative version of selection sort for search and
 * sort program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"

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
   for (int i = beginIndex; i < endIndex - 1; i++) {
      int indexLowest = i;
      for (int j = i + 1; j < endIndex; j++)
         if (strcmp(array.names[indexLowest], array.names[j]) > 0)
            indexLowest = j;
      swap(array.names[indexLowest], array.names[i]);
   }
}
