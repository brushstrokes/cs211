// testMyConstString.cpp

/**
 * Tests the MyConstString class.
 *
 * Author: John D. Donath
 */

#include "MyConstString.h"
#include <iostream>

using namespace std;

int main() {
   MyConstString str("ABC");
   cout << str << endl;
   str[2] = 'E';
   cout << str << endl;

   MyConstString str2(str);
   MyConstString str3;
   str3 = str;

   str.restore();
   cout << str << endl;
   cout << str2 << endl;
   cout << str3 << endl;

   return 0;
}
