/* DynamicDemo.cpp
 *
 * Program to demonstrate pointers and dynamic variables.
 *
 * Author: Walter Savitch, comments by John Donath
 */

#include <iostream>

using namespace std;

/* main()
 *
 * Main entry point to basic program that demonstrates dynamic allocation.
 */
int main( )
{
    // Initialize two pointers
    int *p1, *p2;

    // Dynamically allocate one integer
    p1 = new int;

    // Initialize value of dynamically allocated integer
    *p1 = 42;

    // Set the other pointer to point to this variable as well
    p2 = p1;

    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    // Change value of dynamically allocated variable
    *p2 = 53;

    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    // Allocate another variable dynamically
    p1 = new int;

    // Initialize value of second dynamically allocated variable
    *p1 = 88;

    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    // Free up dynamically allocated variables, to avoid a memory leak
    delete p1;
    delete p2;

    cout << "Hope you got the point of this example!\n";
    return 0;
}
