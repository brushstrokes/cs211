// functionDemoIterative.cpp

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
 *    long -- The factorial of n
 *    (-1 for illegal input)
 */
long factorial(int n)
{
   if ( n < 0 )
      return -1;

   long product = 1;
   for ( int i = 1; i <= n; i++ )
      product = product * i;
   return product;
}  // function factorial(int)

/**
 * long fibonacci(int n)
 *
 * Returns the nth term in a
 * Fibonacci sequence.
 *
 * Parameters:
 *    n - an integer >= 0.
 * 
 * Return value:
 *    long - The Fibonacci value of the nth term
 *    (-1 for illegal input).
 */
long fibonacci(int n)
{
   if ( n < 0 )
      return -1;

   if ( n == 0 || n == 1 )
      return 1;

   long sequence[n+1];
   sequence[0] = 1;
   sequence[1] = 1;
   for ( int i = 2; i <= n; i++ )
      sequence[i] = sequence[i-2] + sequence[i-1];
   return sequence[n];
}  // function fibonacci(int)

/**
 * long powerOfTwo(int n)
 *
 * Returns the nth power of 2.
 *
 * Parameters:
 *    n -- a non-negative integer 
 * 
 * Returns:
 *    The 2 raised to the nth power
 *    -1 for invalid parameter.
 */
long powerOfTwo(int n)
{
   if ( n < 0 ) 
      return -1;
   
   long product = 1;
   for ( int i = 1; i <= n; i++ )
      product = product * 2;
   return product;
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
   while ( length > 1 )  {
      int temp = array[0];
      array[0] = array[length-1];
      array[length-1] = temp;
      array++;
      length -= 2;
   }  // while
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
   while ( endIndex - beginIndex > 1 )  {
      int temp = array[0];
      array[beginIndex] = array[endIndex-1];
      array[endIndex-1] = temp;
      beginIndex++;
      endIndex--;
   }  // while
} // arrayReverse(int*, int, int)

/*
 * Searches for the specified integer in the
 * specified subarray, using an iterative
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

   for ( int i = beginIndex; i < endIndex; i++ )
      if ( toFind == array[i] )
         return i;

   // Assertion:  If we have reached this point,

   return -1;
}  // function linearSearch

/*
 * Searches for the specified integer in the
 * specified subarray, using an iterative
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

   while ( beginIndex < endIndex ) {
      int middle = ( beginIndex + endIndex ) / 2;

      if ( toFind == array[ middle ] )  // match
         return middle;

      if ( toFind < array[ middle ] )
         endIndex = middle;  // search low end of array
      else
         beginIndex = middle + 1;   // search high end of array
   }  // while

   return -1;   // not found
}  // function binarySearch

/*
 * Sorts the specified subarray, using an iterative
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
   if ( beginIndex < 0 )  {
      cout << "beginIndex " << beginIndex
               << " must be >= 0.";
      return;
   }  // if

   if ( endIndex < beginIndex )  {
      cout << "endIndex " << endIndex
               << " must be >= beginIndex "
               << beginIndex << ".";
      return;
   }  // if

   for ( int i = beginIndex; i < endIndex-1; i++ )  {
      int min = i;
      for ( int j = i+1; j < endIndex; j++ )  {
         if ( array[j] < array[min] )
            min = j;
      }  // for j

      if ( array[min] < array[i] )  {
         int temp = array[i];
         array[i] = array[min];
         array[min] = temp;
      }  // if
   }  // for i
}  // function selectionSort
