// linearSearchRecursive.cpp

/* Contains the recursive version of linear search for the searchAndSort
 * program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"

/* search()
 *
 * Searches through the array and returns position of given parameter.
 * Returns -1 if not found.
 *
 * Parameters:
 * NameArray& The array to search in.
 * Name value The value to search for.
 * int begin Position in the array to begin search
 * int end Position in the array to end search
 */
int linearSearch(const NameArray& array, Name value, int begin, int end) {
   if (begin >= end)
      return -1;
   if (strcmp(array.names[begin], value) == 0)
      return begin;
   return linearSearch(array, value, begin + 1, end);
}
