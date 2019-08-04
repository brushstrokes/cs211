// insertionSortRecursive.cpp

/* Contains code for recursive version of insertion sort for search and
 * sort program.
 *
 * Author: John D. Donath
 */

#include "searchAndSort.h"
void sort(NameArray&, int, int, int);
int findPosition(const NameArray&, int, const Name&);
void insertPosition(NameArray&, int, int);


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
   sort(array, beginIndex, endIndex, beginIndex + 1);
}

/* findPosition()
 *
 * Finds the position to insert an element.
 *
 * Parameters:
 *    NameArray& An array where to find the position to insert an element.
 *    int beginIndex The place to begin looking for the insertion position.
 *    Name& The array whose position needs to be found.
 *
 * Return value:
 *    int The position to insert the element.
 */
int findPosition(const NameArray& array, int beginIndex, const Name& name) {
   if (strcmp(array.names[beginIndex], name) > 0)
      return beginIndex;
   findPosition(array, beginIndex + 1, name);
}

/* insertPosition()
 *
 * Inserts an element of namearray into the array at the given place.
 *
 * Parameters:
 *    NameArray& The array where to move an element forward.
 *    int The position where to insert it.
 *    int The position where to remove it from.
 */
void insertPosition(NameArray& array, int position, int pivot) {
   if (position >= pivot)
      return;
   swap(array.names[position], array.names[pivot]);
   insertPosition(array, position + 1, pivot);
}

/* sort()
 *
 * Sorts the list of names using the insertion sort algorithm.
 *
 * Parameters:
 *    NameArray Array of names to be sorted.
 *    int begin Beginning of portion of array to be sorted.
 *    int end End of portion of array to be sorted.
 *    int pivot The border between the sorted and unsorted portions
 *              of the array.    
 */
void sort(NameArray& array, int beginIndex, int endIndex, int pivot) {
   if (pivot >= endIndex)
      return;
   int insert = findPosition(array, beginIndex, array.names[pivot]);
   insertPosition(array, insert, pivot);
   sort (array, beginIndex, endIndex, pivot + 1);
}
