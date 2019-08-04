// CharPair.h

#ifndef CHAR_PAIR_H
#define CHAR_PAIR_H

class CharPair
{
public:
    CharPair( ){/*Body intentionally empty*/}
    CharPair(char firstValue, char secondValue)
                   : first(firstValue), second(secondValue)
    {/*Body intentionally empty*/}

    char& operator[](int index);
private:
    char first;
    char second;
};
#endif
