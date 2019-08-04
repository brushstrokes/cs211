/* TwoDArrayDemo.cpp
 *
 * Program to demonstrate two dimensional array, the method where one
 * dimension is an array of pointers, each of which points to an array.
 *
 * Author: Walter Savitch, modified on 9/18/2002 by John D. Donath
 */

#include <iostream>

using namespace std;

/* main()
 *
 * Main entry point to program, where we demonstrate use of two
 * dimensional array.
 */
int main( )
{
    int d1, d2;
    cout << "Enter the row and column dimensions of the array:\n";
    cin >> d1 >> d2;

    int** m = new int*[d1];
    int i, j;
    for (i = 0; i < d1; i++)
        m[i] = new int[d2];
    //m is now a d1 by d2 array.

    cout << "Enter " << d1 << " rows of " 
         << d2 << " integers each:\n";
    for (i = 0; i < d1; i++)
        for (j = 0; j < d2; j++)
            cin >> m[i][j];

    cout << "Echoing the 2 dimensional array:\n";
    for (i = 0; i < d1; i++)
    {
        for (j = 0; j < d2; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    for (i = 0; i < d1; i++)
        delete[] m[i];
    delete[] m;

    return 0;
}

