// binarySearchIterative.cpp

/* Contains the iterative version of binary search for the searchAndSort
 * program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"

/* binarySearch()
 *
 * Searches through the array and returns position of given parameter.
 * Returns -1 if not found.
 *
 * Parameters:
 * NameArray& The array to search in.
 * Name value The value to search for.
 * int The position in the array to start the search.
 * int The position in the array to end the search.
 */
int binarySearch(const NameArray& array, Name value, int begin, int end) {
   while (begin < end) {
      int middle = (begin + end) / 2;
      if (strcmp(array.names[middle], value) == 0)
         return middle;
      if (strcmp(array.names[middle], value) > 0)
         end = middle;
      else
         begin = middle + 1;
   }

   return -1;
}
