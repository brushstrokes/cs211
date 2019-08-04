/* pointerArith.cpp
 *
 * Program to demonstrate pointer arithmetic when used with arrays.
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
    int* p1, *p2;
    int a[10];
    int index;

    for (index = 0; index < 10; index++)
        a[index] = index;

    p1 = a;
    p2 = p1 - 1;

    for (index = 0; index < 10; index++)
        cout << *(p1 + index) << " " << *(p2 + 1 + index) << endl;
    cout << endl;

    for (index = 1; index <= 10; index++)
        p2[index] = p2[index] + 1;

    for (index = 0; index < 10; index++)
        cout << *(a + index) << " ";
    cout << endl;

    return 0;
}
