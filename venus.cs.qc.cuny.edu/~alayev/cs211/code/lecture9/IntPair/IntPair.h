// IntPair.h

#ifndef INT_PAIR_H
#define INT_PAIR_H

class IntPair
{
public:
    IntPair(int firstValue, int secondValue);
    IntPair operator++( ); //Prefix version
    IntPair operator++(int); //Postfix version
    void setFirst(int newValue);
    void setSecond(int newValue);
    int getFirst( ) const;
    int getSecond( ) const;
private:
    int first;
    int second;
};

#endif