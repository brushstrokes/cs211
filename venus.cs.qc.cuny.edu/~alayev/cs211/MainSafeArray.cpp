#include "SafeArray.h"

#include <iostream>

using namespace std;

template <class T>
void print(SafeArray<T> c)
{
   for (int i = 0; i < c.length(); i++)
      cout << c[i] << " ";
   cout << endl;
}

int main()
{
   
   SafeArray<int> a(10);

   for (int i = 0; i < a.length(); i++)
   {
      a[i] = i;
   }
  
   print(a);

   SafeArray<char> c(10);
   
   for (int i = 0; i < c.length(); i++)
   {
      c[i] =(char) (65 + i);
   }

   print(c);

   return 0;
}
