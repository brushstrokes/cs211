// linearSearchIterative.cpp

/* Contains the iterative version of linear search for the searchAndSort
 * program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"

/* linearSearch()
 *
 * Searches through the array and returns position of given parameter.
 * Returns -1 if not found.
 *
 * Parameters:
 * NameArray& The array to search in.
 * Name& value The value to search for.
 * int The place in the array to start the search
 * int The place in the array to end the search
 */
int linearSearch(const NameArray& array, Name value, int begin, int end) {
   for (int i = begin; i < end; i++)
      if (strcmp(array.names[i], value) == 0)
         return i;
   return -1;
}
