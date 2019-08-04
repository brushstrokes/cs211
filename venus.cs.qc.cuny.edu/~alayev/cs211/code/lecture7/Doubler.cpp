/* Doubler.cpp
 *
 * Program to demonstrate passing an array to a function, and returning
 * an array from a function.
 *
 * Author: Walter Savitch
 */

#include <iostream>

using namespace std;

/* doubler()
 *
 * Creates a new array containing all the values from the previous array,
 * except that the new values are double the value of the previous array.
 *
 * Requires: size is the size of the array a, all indexed variables of a 
 *           have values.
 * Returns: a pointer to an array of the same size as a in which 
 *          each indexed variable is double the corresponding element in a.
 */
int* doubler(int a[], int size);

/* main()
 *
 * Main entry point to the program, which demonstrates how to return
 * an array from a function.
 */
int main( )
{
    int a[] = {1, 2, 3, 4, 5};
    int* b;

    b = doubler(a, 5);

    int i;
    cout << "Array a:\n";
    for (i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Array b:\n";
    for (i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    delete [] b;

    return 0;
}

int* doubler(int a[], int size)
{
    int* temp = new int[size];

    for (int i =0; i < size; i++)
        temp[i] = 2*a[i];

    return temp;
}
