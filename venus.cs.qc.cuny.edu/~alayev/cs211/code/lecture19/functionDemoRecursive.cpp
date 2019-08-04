// functionDemoRecursive.java

#include "functionDemo.h"

/**
 * long factorial(int n)
 *
 * Returns the factorial of parameter n.
 *
 * Parameters:
 *    n -- an integer >= 0
 *
 * Return value:
 *    long -- The factorial of the parameter,
 *    or -1 for illegal input
 */
long factorial(int n)
{
   if ( n < 0 )
      return -1;
   if ( n == 0 )
      return 1;
   return (n * factorial(n-1));
}  // function factorial(int)

/**
 * long fibonacci(int n)
 *
 * Returns the <code>n</code>th term in a
 * Fibonacci sequence.
 *
 * Parameters:
 *    n -- an integer >= 0.
 *
 * Return value:
 *    The nth term in a Fibonacci sequence, or
 *    -1 for an illegal parameter.
 */
long fibonacci(int n)
{
   if ( n < 0 )
      return -1;
   if ( n == 0 || n == 1 )
      return 1;
   return(fibonacci(n-1) + fibonacci(n-2));
}  // function fibonacci(int)


/**
 * long powerOfTwo(int n)
 * Returns the nth power of 2.
 *
 * Parameter:
 *    n --  an integer >= 0.
 *
 * Return value:
 *    2 raised to the nth power
 *    -1 for invalid input
 */
long powerOfTwo(int n)
{
   if (0 == n)
      return 1;
   return 2 * powerOfTwo(n - 1);
}  // function powerOfTwo(int)


/**
 * void arrayReverse(int array[], int length)
 *
 * Reverses the array pointed to by the parameter
 *
 * Parameters
 *    array - A pointer to an integer array.
 *       Precondition:
 *          Points to any array of integers.
 *       Postcondition:
 *          The original sequence of elements
 *          in the array is reversed.
 *    length - The length of the array.
 */
void arrayReverse(int array[], int length)
{
   if (length <= 1)
      return;
   int temp = array[0];
   array[0] = array[length-1];
   array[length-1] = temp;
   arrayReverse(array + 1, length - 2);
} // arrayReverse(int*, int)


/**
 * void arrayReverse(int array[],
 *                   int beginIndex,
 *                   int endIndex)
 *
 * Reverses a specified subarray of the array
 * pointed to by the parameter.
 *
 * Parameters
 *    array - A pointer to an integer array.
 *       Precondition:
 *          Points to any array of integers.
 *       Postcondition:
 *          The original sequence of elements
 *          in the subarray is reversed.
 *    beginIndex - index of first element in
 *           subarray.
 *    endIndex - index of location one past
 *           the last element in the subarray.
 */
void arrayReverse(int array[],
                  int beginIndex,
                  int endIndex)
{
   if ( endIndex - beginIndex <= 1)
      return;
   int temp = array[beginIndex];
   array[beginIndex] = array[endIndex-1];
   array[endIndex-1] = temp;
   arrayReverse(array, beginIndex + 1, endIndex - 1);
} // arrayReverse(int*, int, int)


/*
 * Searches for the specified integer in the
 * specified subarray, using a recursive
 * version of linear search.
 *
 * Parameters:
 *    array - A pointer to an integer array.
 *    toFind - number to search for
 *    beginIndex - index of first element in
 *           subarray.
 *    endIndex - index of location one past
 *           the last element in the subarray.
 *
 * Returns:
 *    index of the element toFind, if found.
 *    -1 if toFind is not found.
 */
int linearSearch(const int array[],
                 int toFind,
                 int beginIndex,
                 int endIndex)
{
   if ( beginIndex < 0 )  {
      cout << "beginIndex " << beginIndex
               << " must be >= 0.";
      return -1;
   }  // if

   if ( endIndex < beginIndex )  {
      cout << "endIndex " << endIndex
               << " must be >= beginIndex "
               << beginIndex << ".";
      return -1;
   }  // if

   if ( beginIndex == endIndex )   // empty subarray
      return -1;
   if ( toFind == array[beginIndex] )   // found
      return beginIndex;
   return linearSearch(array, toFind, beginIndex+1, endIndex);
}  // function linearSearch

/*
 * Searches for the specified integer in the
 * specified subarray, using a recursive
 * version of binary search.
 *
 * Parameters:
 *    array - A pointer to an integer array.
 *       The elements must be sorted.
 *    toFind - number to search for
 *    beginIndex - index of first element in
 *           subarray.
 *    endIndex - index of location one past
 *           the last element in the subarray.
 *
 * Returns:
 *    index of the element toFind, if found.
 *    -1 if toFind is not found.
 */
int binarySearch(const int array[],
                 int toFind,
                 int beginIndex,
                 int endIndex)
{
   if ( beginIndex < 0 )  {
      cout << "beginIndex " << beginIndex
               << " must be >= 0.";
      return -1;
   }  // if

   if ( endIndex < beginIndex )  {
      cout << "endIndex " << endIndex
               << " must be >= beginIndex "
               << beginIndex << ".";
      return -1;
   }  // if

   if ( endIndex == beginIndex )  // empty subarray
      return -1;  // not found

   int middle = ( beginIndex + endIndex ) / 2;
   if ( toFind == array[ middle ] )  // match
      return middle;

   if ( toFind < array[ middle ] )
      // search low end of array:
      return binarySearch(array, toFind, beginIndex, middle);
   else   // if ( toFind > array[ middle ] )
      // search high end of array:
      return binarySearch(array, toFind, middle + 1, endIndex);
}  // function binarySearch


/*
 * Sorts the specified subarray, using a recursive
 * version of the selection sort algorithm.
 *
 * Parameters:
 *    array - A pointer to an integer array.
 *       Precondition:  All the elements in the
 *          subarray beginIndex to endIndex have
 *          meaningful values.
 *       Postconditon:  The elements in the
 *          subarray beginIndex to endIndex are
 *          in ascending order.
 *    beginIndex - index of first element in
 *           subarray.
 *    endIndex - index of location one past
 *           the last element in the subarray.
 */
void selectionSort(int array[],
                   int beginIndex,
                   int endIndex)
{
   cout << "Function selectionSort not yet implemented." << endl;
}  // function selectionSort
