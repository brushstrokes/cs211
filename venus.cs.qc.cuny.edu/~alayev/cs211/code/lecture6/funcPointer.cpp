/* funcPointer.cpp
 *
 * Program to demonstrate the way call-by-value parameters
 * behave with pointer arguments.
 *
 * Author: Walter Savitch, modified by John Donath on 9/18/2002
 */

#include <iostream>

using namespace std;

void sneaky(int* temp);

/* main()
 *
 * Main entry point to a program that demonstrates passing pointers to a function.
 */
int main( )
{
    // Initialize a variable
    int v;

    // Initialize a pointer
    int* p;

    // Have the pointer point to the variable
    p = &v;

    // Initialize value of variable through pointer
    *p = 77;

    cout << "Before call to function *p == " 
         << *p << ", v == " << v << endl;

    sneaky(p);

    cout << "After call to function *p == " 
         << *p << ", v == " << v << endl;

    return 0;
}

/* sneaky()
 *
 * Demonstrates how pointers can be used to change a parameter's value.
 *
 * Requires: A pointer to an initialized integer.
 * Modifies: The value the integer points to.
 */
void sneaky(int* temp)
{
    *temp = 99;
    cout << "Inside function call *temp == "
         << *temp << endl;
}
