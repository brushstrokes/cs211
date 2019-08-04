// 08-06.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

#include "IntPair.h"

int main( )
{
    IntPair a(1,2);
    cout << "Postfix a++: Start value of object a: ";
    cout << a.getFirst( ) << " " << a.getSecond( ) << endl;
    IntPair b = a++; 
    cout << "Value returned: ";
    cout << b.getFirst( ) << " " << b.getSecond( ) << endl;
    cout << "Changed object: ";
    cout << a.getFirst( ) << " " << a.getSecond( ) << endl;

    a = IntPair(1, 2);
    cout << "Prefix ++a: Start value of object a: ";
    cout << a.getFirst( ) << " " << a.getSecond( ) << endl;
    IntPair c = ++a;   
    cout << "Value returned: ";
    cout << c.getFirst( ) << " " << c.getSecond( ) << endl;
    cout << "Changed object: ";
    cout << a.getFirst( ) << " " << a.getSecond( ) << endl;
    return 0;
}

