/* arrayPointer.cpp
 *
 * Program to demonstrate that an array variable is a kind of pointer variable.
 *
 * Author: Walter Savitch, modified by John D. Donath on 9/18/2002
 */

#include <iostream>
 
using namespace std;

/* main()
 *
 * Main entry point to the program, which demonstrates how arrays behave with
 * pointers.
 */
int main( )
{
    int* p;
    int a[10];
    int index;

    for (index = 0; index < 10; index++)
        a[index] = index;

    p = a;

    for (index = 0; index < 10; index++)
        cout << p[index] << " ";
    cout << endl;

    for (index = 0; index < 10; index++)
        p[index] = p[index] + 1;

    for (index = 0; index < 10; index++)
        cout << a[index] << " ";
    cout << endl;

    return 0;
}
