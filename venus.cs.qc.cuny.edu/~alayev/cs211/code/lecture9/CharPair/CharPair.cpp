// CharPair.cpp

#include "CharPair.h"
#include <iostream>

using namespace std;

//Uses iostream and cstdlib:
char& CharPair::operator[](int index)
{
    if (index == 1)
        return first;
    else if (index == 2)
        return second;
    else
    {
        cout << "Illegal index value.\n";
        exit(1);
    }
}
