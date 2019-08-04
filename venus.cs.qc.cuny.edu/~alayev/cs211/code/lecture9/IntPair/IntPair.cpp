// IntPair.cpp

#include "IntPair.h"

IntPair::IntPair(int firstValue, int secondValue) 
                     : first(firstValue), second(secondValue)
{/*Body intentionally empty*/}

IntPair IntPair::operator++(int ignoreMe) //postfix version
{
    int temp1 = first;
    int temp2 = second;
    first++;
    second++;
    return IntPair(temp1, temp2);
}

IntPair IntPair::operator++( ) //prefix version
{
    first++;
    second++;
    return IntPair(first, second);
}

void IntPair::setFirst(int newValue)
{
    first = newValue;
}

void IntPair::setSecond(int newValue)
{
    second = newValue;
}

int IntPair::getFirst( ) const
{
    return first;
}

int IntPair::getSecond( ) const
{
    return second;
}
