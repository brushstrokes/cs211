/* funcReference.cpp
 *
 * Program to demonstrate the way call-by-reference parameters behave.
 *
 * Author: Walter Savitch, modified by John Donath on 9/18/2002
 */

#include <iostream>

using namespace std;

void sneaky(int& temp);

/* main()
 *
 * Main entry point to a program that demonstrates passing pointers to a function.
 */
int main( )
{
    // Initialize a variable
    int v = 77;

    cout << "Before call to function v == " << v << endl;

    sneaky(v);

    cout << "After call to function v == " << v << endl;

    return 0;
}

/* sneaky()
 *
 * Demonstrates how referencess can be used to change a parameter's value.
 *
 * Requires: A reference to an initialized integer.
 * Modifies: The value of the parameter.
 */
void sneaky(int& temp)
{
    temp = 99;
    cout << "Inside function call temp == "
         << temp << endl;
}
