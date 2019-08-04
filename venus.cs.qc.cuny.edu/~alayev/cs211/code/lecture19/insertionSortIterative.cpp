// insertionSortIterative.cpp

/* Contains code for iterative version of insertion sort for search and
 * sort program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"

/* sort()
 *
 * Sorts the list of names using the insertion sort algorithm.
 *
 * Parameters:
 *    NameArray Array of names to be sorted.
 *    int begin Beginning of portion of array to be sorted.
 *    int end End of portion of array to be sorted.
 *    
 */
void sort(NameArray& array, int beginIndex, int endIndex) {
   for (int i = beginIndex + 1; i < endIndex; i++) {
      Name ins;
      strcpy(ins, array.names[i]);
      int j = i - 1;
      while (strcmp(ins, array.names[j]) < 0) {
         strcpy(array.names[j+1], array.names[j]);
         j--;
      }
      strcpy(array.names[j+1], ins);
   }
}

