// binarySearchRecursive.cpp

/* Contains the recursive version of binary search for the searchAndSort
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
 * int begin The beginning of the array.
 * int end The end of the array.
 */
int binarySearch(const NameArray& array, Name value, int begin, int end) {
   if (begin >= end)
      return -1;

   int middle = (begin + end) / 2;
   if (strcmp(array.names[middle], value) == 0)
      return middle;

   if (strcmp(array.names[middle], value) < 0)
      return binarySearch(array, value, middle + 1, end);

   return binarySearch(array, value, begin, middle);
}
