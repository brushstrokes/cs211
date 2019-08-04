/* PointerAndReference.cpp
 *
 * Program to demonstrate pointers and references.
 *
 */
#include <iostream>

using namespace std;

/* main()
 *
 * Driver program to demonstrate use of pointers and references
 *
 */
int main( )
{
    // Initialize two pointers
    int *p1, *p2;

    // Two variables are initialized
    int v1 = 88, v2 = 22;

    // One reference is initialized
    int &r1 = v1, &r2 = v2;;

    p1 = &v1;
    p2 = p1;
    *p1 = 40;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;
    cout << "v1 == " << v1 << endl;
    cout << "v2 == " << v2 << endl;

    *p2 = 55;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;
    cout << "v1 == " << v1 << endl;
    cout << "v2 == " << v2 << endl;

    p1 = &v2;
    *p1 = 99;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;
    cout << "v1 == " << v1 << endl;
    cout << "v2 == " << v2 << endl;

    r1 = 95;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;
    cout << "v1 == " << v1 << endl;
    cout << "v2 == " << v2 << endl;

    return 0;
}
