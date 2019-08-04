//Program to demonstrate use of the set template class.
#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;
using std::set<char>::const_iterator;

int main( )
{
    set<char> s;

    s.insert('A');
    s.insert('D');
    s.insert('D');
    s.insert('C');
    s.insert('C');
    s.insert('B');

    cout << "The set contains:\n";
    const_iterator p;
    for (p = s.begin( ); p != s.end( ); p++)
    cout << *p << " ";
    cout << endl;

    cout << "Removing C.\n";
    s.erase('C');
    for (p = s.begin( ); p != s.end( ); p++)
    cout << *p << " ";
    cout << endl;

    return 0;
}
